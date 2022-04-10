#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double A;
    double B;
    cin >> A >> B;
    double C = (A*3.5+B*7.5)/(3.5+7.5);
    cout << setprecision(5) << fixed  << "MEDIA = " << C << endl;
}