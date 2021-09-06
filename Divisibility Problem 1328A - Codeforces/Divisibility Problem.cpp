#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a % b != 0)
        {
            c = b - (a % b);
            cout << c << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
}