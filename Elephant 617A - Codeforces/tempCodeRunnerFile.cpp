#include <iostream>
using namespace std;

int main() {
    int a, pas=0;
    cin >> a;
    pas = a / 5;
    if (a % 5 > 0) {
        pas++;
    }
    cout << pas;
}