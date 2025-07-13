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
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        int k = 0, s = 0;
        vector<int> v;
        v.push_back(a[0]);
        
int l=0;
        for (int i = 1; i < n; i++)
        {
            if ((v[l] % 2 == 0 && a[i] % 2 == 0) || (v[l] % 2 != 0 && a[i] % 2 != 0))
            {
                v[l] = v[l] * a[i];
                s++;
            }
            else
            {
                v.push_back(a[i]);
                l++;
            }
        }
        cout << s << endl;
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
            cout<<endl;
    }
}