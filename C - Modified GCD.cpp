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
    return b==0?a:gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}

int main()
{
    FAST
    int a,b;
    cin>>a>>b;
    int GCD=gcd(a,b);
    vector<ll>hcd;
    for(int i=1;i*i<=GCD;i++)
    {
        if(GCD%i==0)
        {
            hcd.pb(i);
            hcd.pb(GCD/i);
        }
    }
    bsort(hcd);
    int q;
    cin>>q;
    while(q--)
    {
        int low,high;
        cin>>low>>high;
        int idx=upper_bound(hcd.begin(),hcd.end(),high)-hcd.begin();
        idx--;
        if(hcd[idx]<low)
            cout<<-1<<endl;
        else
            cout<<hcd[idx]<<endl;
    }

}


