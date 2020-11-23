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

int main()
{
    FAST
    int tc=1;
    //cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++)cin>>ar[i];
        //int l=n-k+1;
        if(n==k)
        {
            cout<<0<<endl;
            return 0;
        }
        if(k==1)
        {
            cout<<*max_element(ar,ar+n)-*min_element(ar,ar+n)<<endl;
            return 0;
        }
        int mn=1e9+5;
        int ans=ar[n-1]-ar[0];
        vector<int>v;
        for(int i=1;i<n;i++)v.pb(ar[i-1]-ar[i]);
        bsort(v);
        for(int i=0;i<k-1;i++)ans+=v[i];
        cout<<ans<<endl;

    }
    return 0;
}

