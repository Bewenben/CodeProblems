#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

    int n; // number of watermelons to be divided
    cin >> n;
    if (n==2){
        printf("NO\n"); // no watermelons to be divided into even number, Output : 1
        return 0;
    }
    if (n%2==0) {
        printf("YES\n"); // watermelons to be divided into even number
    }
    else{
        printf("NO\n"); // no watermelons to be divided into even number, Output : Odd number
    }
    return 0;
}