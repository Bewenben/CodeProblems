#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int max = 0;
    int min = 1000;
    int maxindex = 0;
    int minindex = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > max)
        {
            maxindex = i;
            max = x;
        }
        if (x <= min)
        {
            minindex = i;
            min = x;
        }
    }
    if (maxindex > minindex)
    {
        cout << (maxindex - 1) + (n - minindex) - 1;
    }
    else
    {
        cout << (maxindex - 1) + (n - minindex);
    }
    return 0;
}