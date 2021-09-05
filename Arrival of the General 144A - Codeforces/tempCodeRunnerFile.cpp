#include <iostream>

using namespace std;

int main(){
    int arr[101],n,max=-999999,min=999999,temp,count=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] >= max){
            max = arr[i];
        }
        if (arr[i] <= min){
            min = arr[i];
        }
    }
    for (int i = 0; i < n-1; i++){
        if (arr[0] == max){
            break;
        }
        else if (arr[i] == max){
            if (arr[i-1] > arr[i]){
                temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
                count++;
            }
            for (int j = 0; j < n; j++){
                cout << arr[j] << " ";
            }
            cout << endl;
            i=0;
        }
    }
    // for (int i = 1; i < n-1; i++){
    //     if (arr[n] == min){
    //         break;
    //     }
    //     if (arr[i] == arr[i+1]){
    //         i++;
    //         continue;
    //     }
    //     if (arr[i] < arr[i+1]){
    //         temp = arr[i];
    //         arr[i] = arr[i+1];
    //         arr[i+1] = temp;
    //         for (int j = 0; j < n; j++){
    //             cout << arr[j] << " ";
    //         }
    //         cout << endl;
    //         count++;
    //         i=1;
    //     }
    // }
    cout << count << endl;
    cout << max << endl;
    cout << min << endl;
}