#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int n,t,count=0;
    char s[100],temp;
    cin >> n >> t;
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }
    while(t--){
        for (int i = 0; i < n; i++){
            if (s[i] == 'B' && s[i+1] == 'G'){
                temp = s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
                count++;
                i++;
            }
        }   
    }
    for (int i = 0; i < n; i++){
        cout << s[i] ;
    }
    return 0;
}