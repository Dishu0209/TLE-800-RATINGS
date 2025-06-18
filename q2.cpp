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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<int> diff;
        diff.push_back(v[0]);
        int last = (x - v[n - 1]);
        diff.push_back(2 * last);
        if (n > 1)
        {

            for (int i = 0; i < n - 1; i++)
            {
                diff.push_back(v[i + 1] - v[i]);
            }
        }

        int max = *max_element(diff.begin(), diff.end());
        out.push_back(max);
    }
    for (int i = 0; i < t1; i++)
    {
        cout << out[i] << endl;
    }
    return 0;
}
