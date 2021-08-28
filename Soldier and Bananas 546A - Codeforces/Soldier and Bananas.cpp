#include <iostream>

using namespace std;

int main(){
    int k,n,w,output=0;
    cin >> k >> n >> w;
    for (int i = 1; i < w+1 ; i++){
        output = output + (i*k);
    }
    if ( n < output ){
        output = output - n;
        cout << output << endl;
    }
    else{
        output = 0;
        cout << output << endl;
    }
}