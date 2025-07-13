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
            cin >> a[i];
            int s=0;
            for(int i=0;i<n;i++)
            {
                s=s^a[i];
            }
            if(n%2==1)
            cout<<s<<endl;
            else
            {
                if(s==0)
                cout<<s<<endl;
                else
                cout<<-1<<endl;
            }
    }
}