#include <iostream>

using namespace std;

int main()
{
    int n, count=0;
    cin >> n;
    while(n > 0)
    {
        if (n >= 100)
        {
            n = n - 100;
            count++;
        }
        else if (n >= 20)
        {
            n = n - 20;
            count++;
        }
        else if (n >= 10)
        {
            n = n - 10;
            count++;
        }
        else if (n >= 5)
        {
            n = n - 5;
            count++;
        }
        else if (n >= 1)
        {
            n = n - 1;
            count++;
        }
        else if (n == 0)
        {
            break;
            count++;
        }
    }
    cout << count << endl;
}