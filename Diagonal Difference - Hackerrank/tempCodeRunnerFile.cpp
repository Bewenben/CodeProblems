#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int arr[100][100];
    int n;
    int positiveSum = 0;
    int negativeSum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        positiveSum += arr[i][i];
    }
    for(int i = 0; i < n; i++){
        // cout << arr[i][n-i-1] << " ";
        negativeSum += arr[i][n-i-1];
    }
    cout << abs(positiveSum - negativeSum) << endl;
}