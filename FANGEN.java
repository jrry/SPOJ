import java.util.Scanner;

/**
 * @author Jaroslaw Pawlowski
 */

class FANGEN {

    private int n;
    private int star;
    private final char ch1;
    private final char ch2;
    private final char[][] fan;

    public FANGEN(int n) 
    {  
        if (n < 0) 
        {
            n = -n;
            ch1 = '.';
            ch2 = '*';
            this.n = n;
            fan = new char[2 * n][2 * n];
            fill(1);
        }
        else
        {
            ch1 = '*';
            ch2 = '.';
            this.n = n;
            fan = new char[2 * n][2 * n];
            fill(0);
        }
    }
    
    private void fill(int left)
    {
        
        star = 1 - left;
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < star; j++) 
            {
                fan[i][j] = ch1;
            }
            for (int j = star; j < n; j++) 
            {
                fan[i][j] = ch2;
            }
            star++;
        }
        
        star = n - left;
        for (int i = 0; i < n; i++) 
        {
            for (int j = n; j < star + n; j++) 
            {
                fan[i][j] = ch1;
            }
            for (int j = star + n; j < n * 2; j++) 
            {
                fan[i][j] = ch2;
            }
            star--;
        }
        
        star = n - 1 + left;
        for (int i = n; i < 2 * n; i++) 
        {
            for (int j = 0; j < star; j++) 
            {
                fan[i][j] = ch2;
            }
            for (int j = star; j < n; j++) 
            {
                fan[i][j] = ch1;
            }
            star--;
        }
        
        star = 0 + left;
        for (int i = n; i < 2 * n; i++) 
        {
            for (int j = n; j < star + n; j++) 
            {
                fan[i][j] = ch2;
            }
            for (int j = star + n; j < n * 2; j++) 
            {
                fan[i][j] = ch1;
            }
            star++;
        }
    }
    
    public void display() 
    {
        for (int i = 0; i < 2 * n; i++) 
        {
            for (int j = 0; j < 2 * n; j++) 
            {
                System.out.print(fan[i][j]);
            }
            System.out.println();
        }
        System.out.println();
    }
    
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        int num;
        
        do
        {
            num = scanner.nextInt();
            FANGEN fan = new FANGEN(num);
            fan.display();
        } 
        while (num != 0);
    }

}
