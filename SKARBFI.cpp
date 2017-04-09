#include <cstdio>

/**
 * @author Jaroslaw Pawlowski
 */

int main()
{
    int d,n;
    int amount,direction;
    int H,V;

    scanf("%d", &d);

    for (int i = 0; i < d; i++)
    {
        scanf("%d", &n);

        H = V = 0;

        for (int j = 0; j < n; j++)
        {
            scanf("%d %d", &direction, &amount);

            switch (direction)
            {
                case 0:
                    V += amount;
                    break;
                case 1:
                    V -= amount;
                    break;
                case 2:
                    H -= amount;
                    break;
                case 3:
                    H += amount;
                    break;
            }

        }
        if (V == 0 && H == 0)
        {
            printf("studnia\n");
        }
        else
        {
            if (V == 0)
            {
                if (H < 0)
                    printf("2 %d\n", -H);
                else
                    printf("3 %d\n", H);
                continue;
            }
            if (H == 0)
            {
                if (V < 0)
                    printf("1 %d\n", -V);
                else
                    printf("0 %d\n", V);
                continue;
            }
            if (V < 0)
                printf("1 %d\n", -V);
            else
                printf("0 %d\n", V);
            if (H < 0)
                printf("2 %d\n", -H);
            else
                printf("3 %d\n", H);
        }
    }

    return 0;
}
