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

int main()
{
    FAST
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
        k=min(m-1,k);
        int ans=0;
        for(int i=0;i<=k;i++)
        {
            int mn=1e9;
            for(int j=0;j<=m-k-1;j++)
            {
                int val=max(a[i+j],a[i+j+n-m]);
                mn=min(mn,val);
            }
            ans=max(ans,mn);
            //cout<<ans<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}


