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
        string str;
        cin >> str;
        int k = 0;
        int c = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '.')
            {
                k++;
                c++;
            }
            if (k == 3)
                break;
            else if (str[i] == '#')
                k = 0;
        }
        if (k == 3)
            out.push_back(2);
        else
            out.push_back(c);
    }
    for (int i = 0; i < t1; i++)
    {
        cout << out[i] << endl;
    }
    return 0;
}