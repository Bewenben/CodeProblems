#include <iostream>

using namespace std;

int main(){
    int n,max=0,count=0;
    string x,y="00";
    cin >> n;
    while(n--){
        cin >> x;
        if (x != y){
            count++;
            y=x;
        }
    }
    cout << count << endl;
    return 0;
}