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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s = s + a[i];
        }
        if (s == n * a[0])
            cout << "NO" << endl;

        else
        {
            sort(a.begin(), a.end(), greater<int>());
            int k;
            if (a[0] == a[1])
            {
              k=  a[n - 1] ;
                a[n - 1] = a[1];
                a[1] = k;
            }
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout<<endl;
        }
    }
}