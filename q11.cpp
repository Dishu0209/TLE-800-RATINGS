#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int min ;
    if(v[0]<0)
    min=-v[0];
    else
    min=v[0];
    for (int i = 0; i < n; i++)
    {
        if (v[i] < 0)
        {
            if (min >= (-v[i]))
                min = -v[i];

        }
        else
        {
            if (min >= v[i])
                min = v[i];
        }
    }
    cout << min << endl;
    return 0;
}
