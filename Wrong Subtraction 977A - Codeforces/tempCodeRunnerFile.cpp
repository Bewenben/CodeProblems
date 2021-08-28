#include <iostream>

using namespace std;

int main(){
    int n,k,output=0;
    cin >> n >> k;
    while (k--)
    {
        if (n%10!=0){
            n=n-1;
        }
        else if (n%10==0){
            n=n/10;
        }
    }
    cout << n << endl;
    return 0;
}