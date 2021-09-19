#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[1000], b[1000], i, c = 0, j;
    while (cin >> n)
    {
        for (i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
                if (a[i] == b[j])
                    c++;
        }
        cout << c << endl;
        c = 0;
    }
}