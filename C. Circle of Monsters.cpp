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
        int n;
        cin>>n;
        ll a[n+1],b[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i]>>b[i];
        ll mn=1e18;
        ll ans=0,val;
        for(int i=0;i<n;i++)
        {
            if(i==n-1)
            {
                val=min(a[0],b[i]);
                ans+=a[0]-val;
            }
            else{
                val=min(a[i+1],b[i]);
                ans+=a[i+1]-val;
            }
            //cout<<ans<<endl;
            mn=min(mn,val);
        }
        ans+=mn;
        cout<<ans<<endl;
    }
    return 0;
}

