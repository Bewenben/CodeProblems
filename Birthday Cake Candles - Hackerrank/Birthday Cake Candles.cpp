#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int tallest = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxi = *max_element(arr, arr + n);
    for (int i=0; i < n; i++){
        if (arr[i] == maxi){
            tallest++;
        }
    }
    cout << tallest << endl;
    return 0;
}