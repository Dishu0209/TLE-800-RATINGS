#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, t1;
    cin >> t;
    t1 = t;
    vector<vector<int>> out;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        vector<int>a;
        a.push_back(b[0]);
        for(int i=1;i<n;i++)
        {
            if(b[i]>=b[i-1])
            a.push_back(b[i]);
            else
            {
               
                 a.push_back(b[i]);
                  a.push_back(b[i]);
            }
        }
        out.push_back(a);

    }
    for (int i = 0; i < t1; i++)
    {cout<<out[i].size()<<endl;
        for(int j=0;j<out[i].size();j++)
        cout << out[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
