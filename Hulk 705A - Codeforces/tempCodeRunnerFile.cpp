#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 1; i < n+1; i++){
        if (i%2!=0 && i==n){
            cout << "I hate it";
        }
        else if (i%2==0 && i==n){
            cout << "I love it";
        }
        else if (i%2!=0){
            cout << "I hate that ";
        }
        else if (i%2==0){
            cout << "I love that ";
        }
    }
}