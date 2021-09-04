#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char x[101],y[101];
    cin >> x >> y;
    for (int i = 0; i < strlen(x); i++){
        if (x[i] == y[i]){
            cout << "0";
        }
        else{
            cout << "1";
        }
    }
    return 0;
}