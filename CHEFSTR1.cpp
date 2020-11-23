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
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int s[n+2];
        for(int i=0;i<n;i++)
            cin>>s[i];
        ll sum=0;
        for(int i=1;i<n;i++)
        {
            if(s[i]>s[i-1])
            sum+=abs(s[i]-s[i-1]-1);
            else
            {
                sum+=abs(s[i-1]-s[i]-1);
            }
           // cout<<sum<<endl;
        }
        cout<<sum<<endl;

    }
    return 0;
}


