#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        int s=n+1;
        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            b[i]=s-a[i];
        }
        for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
        cout<<endl;

     }
    }