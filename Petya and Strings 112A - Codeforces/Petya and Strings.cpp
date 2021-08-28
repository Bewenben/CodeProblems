#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

int main(){
    char str1[100];
    char str2[100];
    cin >> str1 >> str2;
    for (int i = 0; i < strlen(str1); i++){
            str1[i] = toupper(str1[i]);
    }
    for (int j = 0; j < strlen(str2); j++){
            str2[j] = toupper(str2[j]);
    }
    int x = strcmp(str1, str2);
    cout << x << endl;
    return 0;
}