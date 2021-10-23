#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main(){
    char s1[101],s2[101],s3[101];
    cin >> s1 >> s2 >> s3;
    strcat(s1,s2);
    sort(s1,s1+strlen(s1));
    sort(s3,s3+strlen(s3));
    if (strcmp(s1,s3) == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}