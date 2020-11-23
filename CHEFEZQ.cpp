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

ll ar[10000000];

int main()
{
    FAST
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        ll n,m,k;
        string s,t;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        ll ans=0;
        bool ok=0;
        ll sum=accumulate(ar,ar+n,0);
        for(int i=0;i<n;i++)
        {
            if(ar[i]<k)
            {
                ans=i+1;
                ok=1;
                break;
            }
            else
            {
                ar[i+1]+=ar[i]-k;
            }
        }
        if(ok)
            cout<<ans<<endl;
        else
        {
            if(ar[n]%k==0)
                cout<<ar[n]/k+n+1<<endl;
            else
            {
                cout<<ar[n]/k+n+1<<endl;
            }
        }
        for(int i=0;i<=n;i++)ar[i]=0;
    }
    return 0;
}

