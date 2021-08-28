#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    char str1[100];
    char str2[100];
    scanf("%s",&str1);
    int len1;
    len1=strlen(str1);
    strcpy(str2,str1);
    int i;
    int n=0;
    if (len1 == 1){
        printf("%s",str1);
    }
    else{
            for (i=0;i<len1;i+=2){
                if(str1[i]=='1'){
                    str2[n]='1';
                    n+=2;
                }
            }
            for (i=0;i<len1;i+=2){
                if(str1[i]=='2'){
                    str2[n]='2';
                    n+=2;
                }
            }
            for (i=0;i<len1;i+=2){
                if (str1[i]=='3'){
                    str2[n]='3';
                    n+=2;
                }
            }
        cout << str2;
    }
    return 0;
}
