#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
vector<ll>ans;
void sorta(ll a[],int n)
{
    for(int i=1;i<=n;i++)
    {
        if(a[i]>=0)
            ans.push_back(a[i]);
    }
    sort(ans.begin(),ans.end());
    int j=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]<0)

        if(a[i]>=0)
        {
            a[i]=ans[j];
            j++;
        }
    }
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<ll,ll>mp;
    for(int i=1;i<=n;i++)
        mp[i]=i;
    ll a[n+2];
    ll cnt=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=mp[i])
        {
            if(a[i]>mp[i])
                cnt+=(a[i]-mp[i]);
            else
                cnt+=(mp[i]-a[i]);
        }
    }
    cout<<cnt<<endl;
}
