#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string name;
    double salary;
    double value;
    cin >> name >> salary >> value;
    double finalvalue = (value*0.15) + salary;
    cout << setprecision(2) << fixed << "TOTAL = R$ " << finalvalue << endl;
}