#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    int hours;
    double perhour;
    cin >> n >> hours >> perhour;
    cout << "NUMBER = " << n << endl;
    cout << setprecision(2) << fixed << "SALARY = U$ " << (hours*perhour) << endl;
}