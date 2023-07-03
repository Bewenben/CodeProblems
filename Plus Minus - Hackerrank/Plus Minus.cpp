#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    double zeros = 0;
    double positives = 0;
    double negatives = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeros++;
        }
        else if (arr[i] > 0)
        {
            positives++;
        }
        else
        {
            negatives++;
        }
    }
    cout << fixed << setprecision(6) << (positives/n) << endl << (negatives/n) << endl << (zeros/n) << endl;
}