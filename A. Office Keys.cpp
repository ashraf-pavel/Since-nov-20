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
#define ALL(v) v.begin(),v.end()
#define clr(x,y) memset(x,y,sizeof x)
#define valid(x,y) ((x>=0&&x<n) && (y>=0&&y<m))

using namespace std;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int,int> pii;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
ll fact(ll n)
{
    ll res=1;
    for(int i=2;i<=n;++i)
    {
        res*=i;
        res%=MOD;
    }
    return res;
}

int n,k,p;
int a[3000],b[3000];
int dp[3000][3000];

int solve(int i,int j)
{
    if(i>=n)return 0;
    if(j>=k)return INT_MAX;

    int &ans=dp[i][j];
    if(dp[i][j]!=-1)
        return dp[i][j];

    ans=INT_MAX;

    ans=max(abs(a[i]-b[j])+abs(b[j]-p),solve(i+1,j+1));

    ans=min(ans,solve(i,j+1));

    return ans;

}
int main()
{
    FAST
    cin>>n>>k>>p;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<k;i++)cin>>b[i];

    sort(a,a+n);sort(b,b+k);
    memset(dp,-1,sizeof dp);

    int ans=solve(0,0);
    cout<<ans<<endl;

    return 0;
}

