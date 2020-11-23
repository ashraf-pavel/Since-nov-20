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
        map<ll,int>vis;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            vis[a[i]]=1;
        }
        int q;
        cin>>q;
        while(q--)
        {
            ll x,y;
            cin>>x>>y;
            if(vis[x+y])
            {
                cout<<-1<<endl;
            }
            else
            {
                int pos=lower_bound(ALL(a),x+y)-a.begin();
                cout<<pos<<endl;
            }
        }
    }
    return 0;
}
