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
        vector<int>a,b;
        int x;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            a.pb(x);
        }
        for(int i=0; i<n; i++)
        {
            cin>>x;
            b.pb(x);
        }
        bsort(a);
        bsort(b);
        int cnta=0,cntb=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]!=b[i])
            {
                cntb+=min(a[i],b[i]);
                cnta++;
            }
        }
        if(cnta%2)
            cout<<-1<<endl;
        else
            cout<<cntb<<endl;
    }
    return 0;
}


