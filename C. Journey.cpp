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
bool vis[MAX];

long double dfs(int u)
{
    long double sum=0;
    int cnt=0;

    vis[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(!vis[v])
        {
            //cout<<sum<<endl;
            sum+=dfs(v);
            cnt++;
        }
    }
    //cout<<cnt<<endl;
    double b=cnt;
    if(cnt==0)
        b=1.0;

    return 1.0+(sum/b);
}

int main()
{
    FAST
    int n;
    cin>>n;
    memset(vis,false,sizeof(vis));
    for(int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    long double ans=dfs(1);
    ans=ans-1.0;
    cout<<fixed<<setprecision(15)<<ans<<endl;
}

