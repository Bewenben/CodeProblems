#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int n, c, m;
        cin >> n >> c >> m;
        int boughtChocolates = n / c;
        int remWrappers = n / c;
        while (remWrappers >= m){
            remWrappers = remWrappers - m;
            boughtChocolates++;
            remWrappers++;
        }
        cout << boughtChocolates << endl;
    }
}