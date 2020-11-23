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
typedef unsigned long long ull;
typedef pair<int,int> pii;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}
vector<int>adj[MAX];
int vis[MAX],depth[MAX],sz[MAX];

void dfs(int src)
{
    vis[src]=1;
    sz[src]=1;
    for(auto i:adj[src])
    {
        if(!vis[i])
        {
            depth[i]=depth[src]+1;
            dfs(i);
            sz[src]+=sz[i];
        }
    }
}


int main()
{
    FAST
    int n,k;
    cin>>n>>k;
    for(int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    depth[1]=0;
    dfs(1);
    vector<int>ans;
    for(int i=1;i<=n;i++)
    {
        int val=depth[i]-sz[i]+1;
        ans.pb(val);
    }
    //for(auto i:ans)
      //  cout<<i<<" ";
    bsort(ans);
    reverse(ans.begin(),ans.end());
    ll sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=ans[i];
    }
    cout<<sum<<endl;


    return 0;
}

