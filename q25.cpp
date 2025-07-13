#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int k = 0;
        while (k != 1)
        {
            if ((s[0] == '0' && s[s.size() - 1] != '1') || (s[0] == '1' && s[s.size() - 1] != '0') )
            {
                cout << s.size() << endl;
                k = 1;
            }
            else
            {
                s.erase(0, 1);
                if (s.size() >= 1)
                    s.erase(s.size() - 1);
                    if (s.size() == 1||s.size() == 0)
                    {
                        cout<<s.size()<<endl;
                        k=1;
                    }
            }
        }
    }
}