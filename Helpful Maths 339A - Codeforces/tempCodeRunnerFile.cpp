#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int main(){

    char str[100];
    cin >> str;
    int len=strlen(str);
    sort(str,str+len);
    for (int i = 0; i < strlen(str); i++){
        cout << str[i];
    }
    return 0;
}