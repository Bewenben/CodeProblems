#include <iostream>

using namespace std;

int main(){
    int n,x;
    cin >> n;
    while(n--){
        cin >> x;
        if ( x == 1 ){
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
    return 0;
}