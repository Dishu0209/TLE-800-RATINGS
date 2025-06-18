#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        
            
            int s=0,a=k,c=0;
            
            vector<int>out;
            
            while(s!=n)
            {
                if(a==x||s+a>n||((n-(s+a))==x&&x==1))
                a--;
                
                
                else{
                   s=s+a; 
                   c++;
                   out.push_back(a);

                }
                if(a==0)
                break;

                
            }
            if(a!=0)
            {
                cout<<"YES"<<endl;
            cout<<c<<endl;
            for(int i=0;i<out.size();i++)
            cout<<out[i]<<" ";
            }
            else
            cout<<"NO";
        
        cout<<endl;
    }
}