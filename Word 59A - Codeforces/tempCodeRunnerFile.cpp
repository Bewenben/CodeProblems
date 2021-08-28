#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char str[100];
    int upper=0,lower=0;
    cin >> str;
    for (int i = 0; i < strlen(str); i++){
        if (isupper(str[i])){
            upper++;
        }
        else if (islower(str[i])){
            lower++;
        }
    }
    if (upper > lower){
        for (int i = 0; i < strlen(str); i++){
            str[i] = toupper(str[i]);
        }
    }
    else if (upper <= lower){
        for (int i = 0; i < strlen(str); i++){
            str[i] = tolower(str[i]);
        }
    }
    cout << str << endl;
    return 0;
}