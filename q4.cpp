#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, t1;
    cin >> t;
    t1=t;
    vector<string>out;
    while (t--)
    {
        int n;
        cin >> n;
        if((n + 1) % 3 == 0 || (n - 1) % 3 == 0)
            out.push_back("First");
        else
            out.push_back("Second");
    }
    for (int i = 0; i < t1; i++)
    {
        cout << out[i] << endl;
    }
    return 0;
}