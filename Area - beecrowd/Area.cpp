#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double A,B,C;
    cin >> A >> B >> C;
    cout << "TRIANGULO: " << setprecision(3) << fixed << (0.5*A*C) << endl;
    cout << "CIRCULO: " << setprecision(3) << fixed << (3.14159*C*C) << endl;
    cout << "TRAPEZIO: " << setprecision(3) << fixed << (0.5*(A+B)*C) << endl;
    cout << "QUADRADO: " << setprecision(3) << fixed << (B*B) << endl;
    cout << "RETANGULO: " << setprecision(3) << fixed << (A*B) << endl;
}