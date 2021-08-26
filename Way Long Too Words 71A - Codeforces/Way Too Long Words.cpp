#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char a[100];
    int n;
    cin >> n; // 4
    while(n--){
        cin >> a; // local
        int x = strlen(a); // 5
        if (x > 10){ // 5 > 4
            cout << a[0] << x-2 << a[x-1] << '\n';
            }
        else{
            cout << a << '\n';
        }
    }
    return 0;
}