#include <iostream>
#include <cctype>

using namespace std;

int main(){
    char s[1000];
    cin >> s;
    s[0]=toupper(s[0]);
    cout << s;
}