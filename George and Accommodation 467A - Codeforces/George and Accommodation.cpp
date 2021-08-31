#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main(){
    int n,p,q,x,count=0;
    cin >> n;
    while(n--){
        cin >> p >> q;
        x = abs(p-q);
        if (x!=0 && x!=1){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
