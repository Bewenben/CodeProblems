#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double n,p,x,sum=0,prod,i;
    cin >> n;
    i=n;
    while(n--){
        cin >> p;
        x=100/p;
        x=1/x;
        sum=sum+x;
    }
    prod=sum/i;
    prod=prod*100;
    cout << fixed << setprecision(12) << prod;
    return 0;
}