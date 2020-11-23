#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,m;
    ll ans=1;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    if(n>m){
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ans=(ans*abs(v[j]-v[i]))%m;
        }
    }
    cout<<ans<<endl;
}
