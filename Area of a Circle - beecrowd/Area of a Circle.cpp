#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double n = 3.14159;
    double R;
    cin >> R;
    double A = n * R*R;
    cout << setprecision(4) << fixed << "A=" << A << endl;
}