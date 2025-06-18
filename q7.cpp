#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,t1;
    cin>>t;
    t1=t;
    vector<int>out;
    while(t--)
    {
        int n,m,i,j;
        cin>>n>>m;
        string s,x;
        cin>>x>>s;
        int c=0;
       
        string copy;
        copy=x;
        int count=0 ,k=0;
        while(k!=1)
        {
            if(copy.find(s)!=string::npos)
            {
                k=1;
                out.push_back(count);
                
            }
            else
            {
                  copy=copy+copy;
                count++;
                
            }
           if(count>5)
           {
            k=1;
out.push_back(-1);
           }

        }
        
    }
    for (int i = 0; i < t1; i++)
    {
        cout << out[i] << endl;
    }
    return 0;
}