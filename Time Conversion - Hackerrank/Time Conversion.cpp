#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    string hourString = str.substr(0, 2);
    string timeString = str.substr(2, n - 4);
    string PMstring = str.substr(n - 2, n);
    int hour = stoi(hourString);
    if (PMstring == "PM")
    {
        if (hour != 12)
        {
            hour += 12;
        }
        if (hour >= 24)
        {
            hour -= 24;
            cout << "00" << timeString << endl;
            return 0;
        }
    }
    else
    {
        if(hour == 12){
            cout << "00" << timeString << endl;
            return 0;
        }
        if (hour < 9)
        {
            cout << "0" << hour << timeString << endl;
            return 0;
        }
    }
    cout << hour << timeString << endl;
}