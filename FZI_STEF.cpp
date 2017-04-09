#include <iostream>

/**
 * @author Jaroslaw Pawlowski
 */
 
using namespace std;

int main()
{
    long long int n,actual,best,sum;

    sum = best = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> actual;

        sum += actual;

        if (actual > sum)
            sum = actual;

        if (sum > best)
            best = sum;
    }

    cout << best;

    return 0;
}
