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
        vector<int>a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        int s=count(a.begin(),a.end(),2);
        if(s%2!=0)
        cout<<-1<<endl;
        else
        {
            int k,c=0;
            for( k=0;k<n;k++)
            {
                int p1=0,p2=0;
            for(int i=0;i<n;i++)
            {
                if(i<=k && a[i]==2)
                p1++;
                else if(a[i]==2)
                p2++;
            }
            if(p1==p2)
            {
                c=1;
                break;
            }
        }
        if(c==1)
        cout<<k+1<<endl;
        else
        cout<<-1<<endl;

        }
    }
}
