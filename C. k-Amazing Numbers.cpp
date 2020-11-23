
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

ll ar[MAX];
vector<int>v[MAX];
int main()
{
    FAST
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        ll n,m,k;
        string s,t;
        cin>>n;

        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            v[a].pb(i);
        }
        vector<int>ans(n+1,INT_MAX);

        for(int i=1;i<=n;i++)
        {
            v[i].pb(n+1);
            int last=0,mx=0;
            for(int j=0;j<v[i].size();j++)
            {
                mx=max(mx,v[i][j]-last);
                last=v[i][j];
            }
            ans[mx]=min(ans[mx],i);
            //cout<<ans[mx]<<endl;
        }
       // for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        for(int i=2;i<=n;i++)
            ans[i]=min(ans[i],ans[i-1]);
        for(int i=1;i<=n;i++){
            if(ans[i]==INT_MAX)
                cout<<-1<<" ";
            else
                cout<<ans[i]<<" ";
        }
        cout<<"\n";
        memset(v,0,sizeof v);
    }
    return 0;
}
