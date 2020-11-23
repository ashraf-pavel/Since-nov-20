#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,ans=0;
    cin>>n;
    map<ll,ll>mp;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        mp[a-i-1]+=a;
        if(ans<mp[a-i-1])
            ans=mp[a-i-1];
    }
    cout<<ans<<endl;
}
