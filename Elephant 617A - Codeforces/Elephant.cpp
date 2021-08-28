#include <iostream>

using namespace std;

int main() {
    int a, pos=0;
    cin >> a;
    pos = a / 5;
    if (a % 5 > 0) {
        pos++;
    }
    cout << pos;
}