#include<bits/stdc++.h>
#define pi acos(-1.0)
#define bsort(v) sort(v.begin(),v.end())
#define pb push_back
#define mp make_pair
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define MOD 1000000007
#define N 10000001

using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;

int main()
{
    FAST
    ll a,b,c;
    cin>>a>>b>>c;
    if(c==0)
    {
        if(a==b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else{
    if(((b-a)/c>-1&&(b-a)%c==0))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    }
}


