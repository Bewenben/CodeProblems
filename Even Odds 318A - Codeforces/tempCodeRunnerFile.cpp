#include <iostream>

using namespace std;

int main(){
    long long x;
    long long oddcounter=1;
    long long evencounter=2;
    long long k;
    long long i=0;
    long long index=0;
    cin >> x >> k;
    //odd
    if (x == 0 || k == 0){
        cout << "0";
        return 0;
    }
    if (k > x){
        cout << "0";
        return 0;        
    }
    for (i=0 ;; i++) {
        if(k == index){
            cout << oddcounter-2;
            return 0;
        }
        else if(oddcounter <= x){
            oddcounter = oddcounter+2;
            index = index+1;
        }
        else{
            break;
        }
    }
    for (i=0;; i++)
    {
        if(k == index){
            cout << evencounter-2;
            return 0;
        }
        if(evencounter <= x){
            evencounter = evencounter+2;
            index = index+1;
        }
        else{
            break;
        }
    }
}