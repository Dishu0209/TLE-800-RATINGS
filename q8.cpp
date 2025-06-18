#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,t1;
    cin>>t;
    t1=t;
    vector<string>out;
    while(t--)
    {
      int n,k;
      cin>>n>>k;
      vector<int>v(n);
      for(int i=0;i<n;i++)
      {
        cin>>v[i];
      }
      if(find(v.begin(),v.end(),k)<v.end())
      {
      out.push_back("YES");
      
}
else
out.push_back("NO");
      
    }
    for (int i = 0; i < t1; i++)
    {
        cout << out[i] << endl;
    }
    return 0;
}  