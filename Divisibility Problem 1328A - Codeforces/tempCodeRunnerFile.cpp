#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double t, a, b, count=0;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        double z=(ceil(b+(b/2)));
        if (z>a){
            a=z;
        }
        int x=a,y=b;
        cout << (x%y) << endl;
    }
}