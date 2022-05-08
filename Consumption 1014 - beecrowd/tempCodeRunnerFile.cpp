#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int A;
    double B;
    cin >> A >> B;
    cout << setprecision(3) << fixed << A/B << " km/l" << endl;
}