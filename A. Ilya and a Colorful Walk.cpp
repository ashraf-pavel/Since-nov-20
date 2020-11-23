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



using namespace std;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int,int> pii;

int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}

int main()
{
    FAST
    int tc=1;
   // cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<int>c(n);
        for(int i=0;i<n;i++)
            cin>>c[i];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(c[i]!=c[0])
              ans=max(ans,i);
            if(c[i]!=c[n-1])
                ans=max(ans,n-1-i);
        }
        cout<<ans<<endl;

    }
    return 0;
}


