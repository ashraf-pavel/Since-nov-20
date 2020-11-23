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
    int tc;
    cin>>tc;
    while(tc--)
    {
        ull n;
        cin>>n;
        ull sum=0;
        int k=0;
        ull cnt =0;
        for(ll i=1; i<=n; i=i+2)
        {
            ll p=(i*i)-1;
            ll q=p;
            p=p-cnt;
            sum=sum+(p*k);
            k++;
            cnt=q;
        }
        cout<<sum<<endl;
    }
}
