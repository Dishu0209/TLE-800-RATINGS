#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, t1;
    cin >> t;
    t1 = t;
    vector<int> out;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> v[i];
        }
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum = sum + v[i];
        }
        out.push_back(-sum);
    }
    for (int i = 0; i < t1; i++)
    {
        cout << out[i] << endl;
    }
    return 0;
}
