#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    if (n==2){
        printf("NO\n");
        return 0;
    }
    if (n%2==0) {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}