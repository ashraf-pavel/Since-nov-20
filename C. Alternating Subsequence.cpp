#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,ans;
        cin>>n;
        vector<ll>v(n);
        cin>>v[0];
        ans=v[0];
        for(int i=1;i<n;i++)
        {
            cin>>v[i];
           if((v[i]>0&&v[i-1]<0)||(v[i]<0&&v[i-1]>0))
            ans+=v[i];
           else if((v[i]>0&&v[i-1]>0)||(v[i]<0&&v[i-1]<0))
           {
               if(v[i-1]>=v[i])
                v[i]=v[i-1];
               else
                ans=ans-v[i-1]+v[i];
           }
        }
        cout<<ans<<endl;
    }
}
