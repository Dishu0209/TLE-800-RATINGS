#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s = 0;
        cin >> n;
        if (n >= 1 && n < 10)
        {
            cout << n << endl;
        }
        else if (n >= 10 && n < 100)
        {
            s = s + 9;
            for (int i = 10; i <=n; i++)
                if (i % 10 == 0)
                    s++;
            cout << s << endl;
        }
       else if (n >= 100 && n < 1000)
        {
            s = s + 18;
            for (int i = 100; i <=n; i++)
                if (i % 100 == 0)
                    s++;
            cout << s << endl;
        }
     else if (n >= 1000 && n < 10000)
        {
            s = s + 27;
            for (int i = 1000; i <=n; i++)
                if (i % 1000 == 0)
                    s++;
            cout << s << endl;
        }
        else if (n >= 10000 && n < 100000)
        {
            s = s + 36;
            for (int i = 10000; i <=n; i++)
                if (i % 10000 == 0)
                    s++;
            cout << s << endl;
        }
      else if (n >= 100000 && n < 1000000)
        {
            s = s + 45;
            for (int i = 100000; i <=n; i++)
                if (i % 100000 == 0)
                    s++;
            cout << s << endl;
        }
    }
}