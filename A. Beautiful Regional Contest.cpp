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
        vector<int>v(n);
        for(auto i:v)cin>>i;
        reverse(ALL(v));
        int id=lower_bound(ALL(v),v[n/2])-v.begin();
        int one=id/3;
        int g=lower_bound(ALL(v),v[one])-v.begin();
        cout<<g<<" "<<g+1<<" "<<id-2*g-1<<endl;
    }
    return 0;
}

