#include <iostream>
#include <string.h>
#include <ctype.h>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int ascii = 97, n;
    char str[101];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = tolower(str[i]);
    }
    sort(str, str + n);

    // for (int i = 0; i < strlen(str); i++){
    //     cout << str[i] << endl;
    // }

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == str[i + 1])
        {
            continue;
        }
        else if (int(str[i]) == ascii)
        {
            ascii++;
            // cout << endl;
            // cout << ascii;
        }
        else if (int(str[i]) != ascii && ascii != 123)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    if (ascii == 123)
    {
        cout << "YES" << endl;
        return 0;
    }
}