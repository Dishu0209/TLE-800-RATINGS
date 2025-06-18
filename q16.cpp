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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<long long> copy(n);
        copy=a;
        sort(copy.begin(), copy.end());
         if (copy != a)
        {
            cout << 0 << endl;
        }
        else
        {
            long long min = a[1]-a[0];
            for(int i=0;i<n-1;i++)
            {
                if((a[i+1]-a[i])<min)
                min=a[i+1]-a[i];
            }
           if(min%2==0)
            min=(min/2)+1;
            else
            min=(min+1)/2;
            cout<<min<<endl;
        }
    }
}