#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double r;
  cin >> r;
  double vol = (4/3.0) * 3.14159 * r*r*r;
  cout << "VOLUME = " << setprecision(3) << fixed << vol << endl;
    return 0;
}