
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
        ll n,m;
        cin>>n>>m;
        ll res=0;
        res+=(n*(n+1))/2;
        ll z=n-m;
        ll k=z/(m+1);
        res-=((k*(k+1))/2)*(m+1);
        res-=((k+1)*(z%(m+1)));
        cout<<res<<endl;
    }
    return 0;
}
