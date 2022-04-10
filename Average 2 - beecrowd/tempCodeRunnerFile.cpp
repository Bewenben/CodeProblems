#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double A;
    double B;
    double C;
    cin >> A >> B >> C;
    double MEDIA = ((A*2)+(B*3)+(C*5))/10;
    cout << setprecision(1) << fixed << "MEDIA = " << MEDIA << endl;
}