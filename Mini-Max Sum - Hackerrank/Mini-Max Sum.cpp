#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long arr[5];
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    long long minSum = arr[0] + arr[1] + arr[2] + arr[3];
    long long maxSum = arr[1] + arr[2] + arr[3] + arr[4];
    cout << minSum << " " << maxSum << endl;
}