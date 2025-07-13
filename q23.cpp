#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int s = 0;

        if (d < b || (c - a) > (d - b))
            cout << -1 << endl;
        else
        {

            int e=d-b;
            a=a+e;
            int f=a-c;
            int s=e+f;
            cout << s << endl;
        }
    }
}