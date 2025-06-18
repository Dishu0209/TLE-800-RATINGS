#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,k;
        cin>>x>>k;
        int g=0,a=x,n=0;
        vector<long long>out;
        while(g!=x)
        {
            if(a%k==0||g+a>x)
            a--;
            else
            {
                g=g+a;
                n++;
                out.push_back(a);
            }
        }
        cout<<n<<endl;
        for(int i=0;i<out.size();i++)
        cout<<out[i]<<" ";

    }
    return 0;
}