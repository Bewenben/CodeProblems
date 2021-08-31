#include <iostream>

using namespace std;

int main(){
    int n,h,a,count=0;
    cin >> n >> h;
    while(n--){
        cin >> a;
        if (a <= h){
            count++;
        }
        if (a > h && a <= 2*h){
            count+=2;
        }
    }
    cout << count << endl;
}