#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{int z=0,d=0;
    while(n>0)
    {
        int k=n%10;
        if(k==0)
        z++;
        d++;
        n=n/10;
    }
    if(z==d-1)
    return true;
    else
    return false;
}
int main()
{
    int t;
    cin >> t;
    vector<int>v;
    for(int i=1;i<10000000;i++)
    {
        if(check(i)==true)
        v.push_back(i);
    }
    while (t--)
    {
        int n, s = 0;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            if(v[i]<=n)
            s++;
            else
            break;
        }
        cout<<s<<endl;
    
    }
    
}