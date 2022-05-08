#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int prod1,prod2;
  int noprod1,noprod2;
  double valprod1,valprod2;
  cin >> prod1 >> noprod1 >> valprod1;
  cin >> prod2 >> noprod2 >> valprod2;
  double amount = (noprod1*valprod1)+(noprod2*valprod2);
  cout << setprecision(2) << fixed << "VALOR A PAGAR: R$ " << amount << endl;
    return 0;
}