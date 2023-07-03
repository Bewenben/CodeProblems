#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        double n, c, m;
        cin >> n >> c >> m;
        double boughtChocolates = n / c; // 6 / 2 = 3
        double remWrappers = n / c;
        while (remWrappers >= m){
            remWrappers = remWrappers - m;
            boughtChocolates++;
            remWrappers++;
        }
        cout << boughtChocolates << endl;
    }
}