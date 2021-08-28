#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,a,b,sum=0,x=0;
    cin >> n;
    while(n--){
        cin >> a >> b;
        x=x-a;
        x=x+b;
        if (x > sum){
            sum = x;
        }
    }
    cout << sum << endl;
}