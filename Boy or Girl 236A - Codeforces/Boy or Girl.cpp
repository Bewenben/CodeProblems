#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main(){
    char s1[100];
    int count = 0;
    cin >> s1;
    sort(s1, s1+strlen(s1));
    for (int i = 0; i < strlen(s1); i++) {
        if (s1[i] != s1[i+1]){
            count++;
        }
    }
    if (count%2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
}