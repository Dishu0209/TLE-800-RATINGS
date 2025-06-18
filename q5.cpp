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
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> copy(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        copy = v;
        sort(copy.begin(), copy.end());
        int min = *min_element(v.begin(), v.end());

        if (min != v[0])
            out.push_back("NO");
        else if (copy == v)
        {
            out.push_back("YES");
        }
        else
            out.push_back("YES");
    }
    for (int i = 0; i < t1; i++)
    {
        cout << out[i] << endl;
    }
    return 0;
}