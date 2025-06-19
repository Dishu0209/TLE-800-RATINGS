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
        int s = 0, max = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                s++;
            }

            else
            {
                s = 0;
            }
            if (max < s)
                max = s;
        }
        cout << max << endl;
    }
}