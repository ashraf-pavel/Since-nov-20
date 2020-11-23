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
    //cin>>tc;
    while(tc--)
    {
        ull n;
        cin>>n;
        if(n==1)
            cout<<1<<endl;
        else if(n==2)
            cout<<2<<endl;
        else
        {
            ull ans=0;
            for(ull i=n;i*i*i>ans;i--)
            {
                for(ull j=i;j*i*i>ans;j--)
                {
                    for(ull k=j;i*k*j>ans;k--)
                    {
                        if(gcd(i,j)==1 && gcd(j,k)==1 && gcd(i,k)==1)
                        {
                            ans=max(ans,i*j*k);
                        }
                    }
                }
            }
            cout<<ans<<endl;
        }

    }
    return 0;
}


