#include <iostream>

using namespace std;

int main()
{
    int n, h[101], a[101], x, count = 0, z;
    cin >> n;
    for (int i = 0; i < (n * 2); i++)
    {
        cin >> h[i];
    }
    cout << "TEST" << endl;
    for (int i = 0; i < (n * 2) - 1; i++)
    {
        if (i % 2 == 0)
        {
            x=0;
            x += 3;
            for (int j = 0; x < (n * 2) + 1; j++)
            {
                cout << h[i] << " " << h[x] << " " << x <<  endl;
                if (h[i] == h[x])
                {
                    count++;
                    break;
                }
                else{
                    x += 2;
                }
            }
        }
        else if (i % 2 == 1)
        {
            x=0;
            x += 1;
            for (int j = 0; x < (n * 2); j++)
            {
                cout << h[i] << " " << h[x] << " " << x <<  endl;
                if (h[i] == h[x])
                {
                    count++;
                    break;
                }
                else{
                    x += 2;
                }
            }
        }
    }
    cout << count << endl;
}