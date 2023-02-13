/*This program is made by 22CE071_Jalay*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float x, y, res;
    cout << "enter x: ";
    cin >> x;
    cout << "enter y: ";
    cin >> y;
    res = x + y;
    cout << endl;
    cout << "Fixed res: " << fixed << res << endl;
    cout << "Scientific res: " << scientific << res << endl;
    cout << "With 2 Precision res: " << setprecision(2) << res << endl;
    cout << "\nThis program is made by 22CE071_Jalay";
}