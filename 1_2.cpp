/*This program is made by 22CE071_Jalay*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << setw(4) << left << i * j;
        }
        cout << endl;
    }
    cout << "\nThis program is made by 22CE071_Jalay";
}