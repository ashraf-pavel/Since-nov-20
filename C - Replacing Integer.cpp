#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll diff=abs(n-k);
    if(n==k)
        cout<<0<<endl;
    else if(n<k)
    {
        cout<<min(n%k,n%diff)<<endl;
    }
    else{
            ll div=ceil((n+0.0)/(k+0.0));
            ll ans=max(abs(n-div*k),n%k);
            cout<<ans<<endl;
    }
    //main();





}
