#include <iostream>

using namespace std;

int main(){
    int s1,s2,s3,s4,count=0;
    cin >> s1 >> s2 >> s3 >> s4;
    if (s1 == s2 || s1 == s3 || s1 == s4){
        count++;
    }
    if (s2 == s1 || s2 == s3 || s2 == s4){
        count++;
    }
    if (s3 == s1 || s3 == s2 || s3 == s4){
        count++;
    }
    if (s4 == s1 || s4 == s2 || s4 == s3){
        count++;
    }
    count--;
    if (count == -1){
        count = 0;
    }
    cout << count << endl;
}