#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if (n == 7){
        cout << "NO" << endl;
        return 0;
    }
    while(n > 0){
        if (n==4 || n==7){
            cout << "YES" << endl;
            return 0;
        }
        else if (n%10==4 || n%10==7){
            n /= 10;
        }
        else{
            cout << "NO" << endl;
            return 0;
        }
    }
    return 0;
}