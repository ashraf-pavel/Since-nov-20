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

string st[505];
int n,m,k;
int X[]= {-1,0,1,0};
int Y[]= {0,1,0,-1};
bool vis[505][505];
vector<pii>grp;

void dfs(int x,int y)
{
    if(vis[x][y] || st[x][y]=='#')
        return ;
    vis[x][y]=1;
    grp.pb(pii(x,y));
    for(int i=0; i<4; i++)
    {
        int dx=x+X[i];
        int dy=y+Y[i];
        if(dx<0||dx>=n || dy<0 ||dy>=m)
            continue;
        dfs(dx,dy);
    }

}

int main()
{
    FAST
    cin>>n>>m>>k;
    for(int i=0; i<n; i++)
        cin>>st[i];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(st[i][j]=='.')
            {
                dfs(i,j);
                reverse(grp.begin(),grp.end());
                for(int z=0; z<k; z++)
                    st[grp[z].F][grp[z].S]='X';
                for(int i=0; i<n; i++)
                    cout<<st[i]<<endl;
                return 0;
            }
        }
    }
}


