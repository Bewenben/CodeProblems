#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int n; // number of problems
    int a;
    int b;
    int c;
    int x=0; // no. of problems the friends will implement on the contest
    cin >> n;
    while (n--){
        cin >> a;
        cin >> b;
        cin >> c;
        if (a+b+c == 2 || a+b+c == 3){
            x=x+1;
        }
    }
    cout << x << endl;
    return 0;
}