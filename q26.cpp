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
           
            int k=0;
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                if(__gcd(a[i],a[j])<=2)
                {
                    k=1;
                    break;
                }
            }
            if(k==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}