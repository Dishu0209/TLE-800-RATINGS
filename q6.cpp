#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, t1;
    cin >> t;
    t1 = t;
    vector<string>out;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        set<int> e;
        e.insert(v[0]);
        for (int i = 0; i < n; i++)
        {
            
                    e.insert(v[i]);
            }
        
       
        if (e.size() > 2)
            out.push_back("NO");
        else if (e.size() == 1)
            out.push_back("YES");
        else
        {
            int c1 = count(v.begin(), v.end(), *e.begin());
            int c2 = count(v.begin(), v.end(), *prev(e.end()));
            if (n % 2 == 0)
            {

                if (c1 == c2)
                    out.push_back("YES");
                else
                    out.push_back("NO");
            }
            else
            {
                if ((c1 - c2) == 1 || (c2 - c1) == 1)
                    out.push_back("YES");
                else
                    out.push_back("NO");
            }
        }
    }
    for (int i = 0; i < t1; i++)
    {
        cout << out[i] << endl;
    }
    return 0;
}