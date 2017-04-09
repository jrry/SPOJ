#include <iostream>
#include <string>

/**
 * @author Jaroslaw Pawlowski
 */

using namespace std;

int main()
{
    int D;
    cin >> D;

    int a, b;
    string sa;

    int two[4] = {6,2,4,8};
    int three[4] = {1,3,9,7};
    int four[2] = {6,4};
    int seven[4] = {1,7,9,3};
    int eight[4] = {6,8,4,2};
    int nine[2] = {1,9};

    for (int i = 0; i < D; i++)
    {
        cin >> sa >> b;
        a = sa.back() - '0';

        switch (a)
        {
            case 0:
                cout << 0 << endl;
                break;
            case 1:
                cout << 1 << endl;
                break;
            case 2:
                cout << two[b%4] << endl;
                break;
            case 3:
                cout << three[b%4] << endl;
                break;
            case 4:
                cout << four[b%2] << endl;
                break;
            case 5:
                cout << 5 << endl;
                break;
            case 6:
                cout << 6 << endl;
                break;
            case 7:
                cout << seven[b%4] << endl;
                break;
            case 8:
                cout << eight[b%4] << endl;
                break;
            case 9:
                cout << nine[b%2] << endl;
                break;
        }
    }

    return 0;
}
