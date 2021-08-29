#include <iostream>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main(){
    int n,A=0,D=0;
    string str;
    cin >> n;
    cin >> str;
    for (int i = 0; i < n; i++){
        char stringindex = str[i];
        if (stringindex == 'A'){
            A++;
        }
        else if (stringindex == 'D'){
            D++;
        }
    }
    if (A > D){
        cout << "Anton" << endl;
    }
    else if (A < D){
        cout << "Danik" << endl;
    }
    else if (A == D){
        cout << "Friendship" << endl;
    }
    return 0;
}
