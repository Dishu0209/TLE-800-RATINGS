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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> b;
        vector<int> c;
        int max=*max_element(a.begin(),a.end());
        int lb = 0, lc = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]== max)
            {
                lc++;
                c.push_back(a[i]);
            }
            else
            {
                lb++;
                b.push_back(a[i]);
            }
        }
        if(lc==0||lb==0)
        cout<<-1<<endl;
        else{
            cout<<lb<<" "<<lc<<endl;
            for (int i = 0; i < b.size(); i++)
            cout<<b[i]<<" ";
            cout<<endl;
            for (int i = 0; i < c.size(); i++)
            cout<<c[i]<<" ";
        }
    }
}
