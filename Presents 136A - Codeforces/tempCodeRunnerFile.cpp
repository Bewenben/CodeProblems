#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a[100],temp;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    for (int i = 0; i < n/2; i++){
        int x=n-i;
        temp = a[i];
        a[i] = a[x];
        a[x] = temp;
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
}