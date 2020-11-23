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

vector<int>adj[MAX];
int vis[MAX],c1=0,c2=0;

void dfs(int src,int c)
{
    vis[src]=c;
    if(c==1)
    {
        c=2,c1++;
    }
    else if(c==2)
    {
        c=1,c2++;
    }
    for(auto i:adj[src])
    {
        if(vis[src]==vis[i])
        {
            cout<<-1<<endl;
            exit(0);
        }
        if(!vis[i])
            dfs(i,c);
    }
}

int main()
{
    FAST
    int tc=1;
    //cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        memset(vis,0,sizeof vis);
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                dfs(i,1);
            }
        }
        cout<<c1<<endl;
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==1)
                cout<<i<<" ";
        }
        cout<<"\n";
        cout<<c2<<"\n";
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==2)
                cout<<i<<" ";
        }
        cout<<"\n";

    }
    return 0;
}
