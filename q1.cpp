#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, t1;
    cin >> t;
    t1 = t;
    vector<string> out;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> a = arr;
        sort(a.begin(), a.end());
        if (k > 1 || a == arr)
        {
            out.push_back("YES");
        }
        else
        {
            out.push_back("NO");
        }
    }
    for (int i = 0; i < t1; i++)
    {
        cout << out[i] << endl;
    }
}