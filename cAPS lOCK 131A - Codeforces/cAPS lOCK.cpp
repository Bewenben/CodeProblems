#include <iostream>
using namespace std;

int main()
{
    string str;
    char x;
    int c = 1;
    cin >> str;
    for (int i = 1; i < str.length(); i++)
    {
        if (islower(str[i]))
        {
            c = 0;
        }
    }
    if (c == 1)
    {
        for (int j = 0; j < str.length(); j++)
        {
            if (islower(str[j]))
                x = toupper(str[j]);
            else
                x = tolower(str[j]);
            cout << x;
        }
    }
    else
        cout << str;

}