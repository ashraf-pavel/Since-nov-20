#include<bits/stdc++.h>
#define pi acos(-1.0)
#define bsort(v) sort(v.begin(),v.end())
#define pb push_back
#define mp make_pair
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define MOD 1000000007
#define N 10000001
#define F first
#define S second
#define MAX 500050



using namespace std;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int,int> pii;

int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}

int main()
{
    FAST
    int tc=1;
    //cin>>tc;
    while(tc--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        ll a[MAX];
        for(int i=1;i<=n;i++)cin>>a[i];
        ll l[MAX],r[MAX],d[MAX],cnt[MAX]={};
        for(int i=1;i<=m;i++)cin>>l[i]>>r[i]>>d[i];
        for(int i=0;i<k;i++)
        {
            int x,y;
            cin>>x>>y;
            cnt[x]++;
            cnt[y+1]--;
        }
        for(int i=2;i<=m;i++)
            cnt[i]+=cnt[i-1];
      //  for(int i=1;i<=m;i++)
        //    cout<<cnt[i]<<" ";
        ll sum[MAX]={};
        for(int i=1;i<=m;i++)
        {
            sum[l[i]]+=cnt[i]*d[i];
            sum[r[i]+1]-=cnt[i]*d[i];
        }
        for(int i=2;i<=n;i++)
            sum[i]+=sum[i-1];
        for(int i=1;i<=n;i++)
            cout<<sum[i]+a[i]<<" ";

    }
    return 0;
}


