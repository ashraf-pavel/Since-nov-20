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
#define valid(x,y) (x>=0&&x<n &&y>=0&&y<m)

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
int ar[MAX];
vector<int>adj[MAX];
int vis[MAX],level[MAX];

void bfs(int src)
{
    memset(vis,0,sizeof vis);
    memset(level,0,sizeof level);
    queue<int>q;
    q.push(src);
    vis[src]=1;
    level[src]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            int y=adj[u][i];
            if(vis[y]==0)
            {
                vis[y]=1;
                level[y]=level[u]+1;
                q.push(y);
                if(level[y]>=mx)
                {
                    mx=level[y];

                }
            }
        }
    }
}

int main()
{
    FAST
    int tc=1;
    cin>>tc;
    while(tc--)
    {
       int n;
       cin>>n;
       for(int i=0;i<n-1;i++)
       {
           int u,v;
           cin>>u>>v;
           adj[u].pb(v);
           adj[v].pb(u);
       }
       bfs(1);

    }
    return 0;
}
