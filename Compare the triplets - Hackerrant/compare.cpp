#include <iostream>

using namespace std;

int main()
{
    int a[3];
    int b[3];
    int c[2] = {0, 0};
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            c[0] += 1;
        }
        else if (a[i] < b[i])
        {
            c[1] += 1;
        }
    }
    cout << c[0] << " " << c[1] << endl;
}