#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int n, p, q, arr[202], count = 0;
    cin >> n >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }
    cin >> q;
    for (int i = p; i < p + q; i++)
    {
        cin >> arr[i];
    }
    sort (arr,arr+(p+q));
    if (arr[0] != 1){
        cout << "Oh, my keyboard!" << endl;
        return 0;
    }
    for (int i = 0; i < (p + q); i++)
    {
        if (arr[i] == arr[i+1]){
            count = arr[i];
            continue;
        }
        if (arr[i] == arr[i + 1] - 1 || arr[i] == n)
        {
            count = arr[i];
        }
        else{
            break;
        }
    }
    if (count == n){
        cout << "I become the guy." << endl;
    }
    else{
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}