#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int m,n;
    cin >> m >> n;
    int area = m*n;
    int count = 0;
    int sum = 0;
    for (int i = 0; i < m*n ; i++){
        if (area > sum && (area-1 != sum)){
            sum=sum+2;
            count++;
        }
        else{
            break;
        }
    }
    cout << count << endl;
    return 0;
}