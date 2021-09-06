#include <iostream>
#include <algorithm>
#include <string.h>
#include <ctype.h>

using namespace std;

int main()
{
    string a;
    int j=0,count=0;
    char x[1001];
    getline(cin,a);
    for (int i = 0; i < a.size()-1; i++){
        if (isalpha(a[i])){
            x[j]=a[i];
            j++;
            count++;
        }
    }
    sort(x,x+j);
    for (int i = 0; i < j; i++){
        if (x[i]==x[i+1]){
            count--;
        }
        if (count==0){
            count = 1;
            break;
        }
    }
    cout << count << endl;
}