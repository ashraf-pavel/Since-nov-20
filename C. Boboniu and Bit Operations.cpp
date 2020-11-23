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

int main()
{
    FAST
    int tc=1;
  //  cin>>tc;
    while(tc--)
    {
        ll n,m,k;
        string s,t;
        cin>>n>>m;
        int a[n+1],b[m+1];
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int j=1;j<=m;j++)cin>>b[j];

        for(int ans=0;ans<(1<<9);ans++)
        {
            bool ok=1;
            for(int i=1;i<=n;i++)
            {
                bool ok2=1;
                for(int j=1;j<=m;j++)
                {
                    if(((a[i]&b[j])|ans)==ans)
                    {
                        ok2=0;
                        break;
                    }
                }
                if(ok2)
                {
                    ok=0;
                    break;
                }
            }
            if(ok)
            {
                cout<<ans<<endl;
                return 0;
            }
        }
    }
    return 0;
}

