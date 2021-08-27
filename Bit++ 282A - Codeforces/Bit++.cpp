#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int n;
    int x=0;
    string str;
    cin >> n;
    while(n--){
        cin >> str;
        if (str == "++X"){
            ++x;
        }
        else if (str == "X++"){
            x++;
        }
        else if (str == "X--"){
            x--;
        }
        else if (str == "--X"){
            --x;
        }
    }
    cout << x << endl;
    return 0;
}