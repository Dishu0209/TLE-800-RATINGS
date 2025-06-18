#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int s = a + b + c;
        for (int i = 0; i <= s; i++)
        {
            int k = 0;
            if (i % 2 == 0)
            {
                if (a > 0)
                    a--;

                else if (c > 0)
                    c--;
                else
                {
                    cout << "Second" << endl;
                    break;
                }
            }
            else
            {
                if (b > 0)
                    b--;
                else if (c > 0)
                    c--;
                else
                {
                    cout << "First" << endl;
                    break;
                }
            }
            
        }
    }
    return 0;
}
