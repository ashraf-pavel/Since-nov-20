#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        ll n,m;
        scanf("%lld %lld",&n,&m);
        ll sum=0;
        if(m>n)
            cout<<"0\n";
        else if(m==n)
            cout<<"1\n";
        else if(m==1)
        {
            cout<<(n*(n-1))/2<<endl;
        }
        else
        {
            n=n/m;
            ll val=1;
            ll x=1,ans=0;
            vector<int>v(10);
            for(int i=0;i<10;i++){
                v[i]=(m*(i+1))%10;
                ans+=v[i];
            }
            for(int i=0;i<n%10;i++)
                sum+=v[i];
            cout<<sum+n/10*ans<<endl;
        }
    }
}
