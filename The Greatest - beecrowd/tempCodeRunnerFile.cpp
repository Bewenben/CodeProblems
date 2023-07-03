#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int A,B,C;
    cin >> A >> B >> C;
    int G1=((A+B+abs(A-B))/2);
    int G2=((A+C+abs(A-C))/2);
    if (G1 >= G2){
        cout << G1 << " eh o maior" << endl;
    }
    else{
        cout << G2 << " eh o maior" << endl;
    }
}