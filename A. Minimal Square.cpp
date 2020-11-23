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
typedef unsigned long long ull;
typedef pair<int,int> pii;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
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
        string s,t;
        ll n,m,k,sum=0,cnt=0,div;
        int a,b;
        cin>>a>>b;
        int mn=min(a,b);
        int mx=max(a,b);
        if((2*mn)>=mx)
            cout<<4*mn*mn<<endl;
        else
            cout<<mx*mx<<endl;
    }
    return 0;
}

