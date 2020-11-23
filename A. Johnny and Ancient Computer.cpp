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
        ll a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        ll mini=min(a,b);
        ll maxi=max(a,b);
        if(maxi%mini!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        ll div=maxi/mini;
        if(div%2)
        {
            cout<<-1<<endl;
            continue;
        }
        int cnt=0;
        while(div%8==0)
        {
            div/=8;
            cnt++;
        }
        while(div%4==0)
        {
            div/=4;
            cnt++;
        }
        while(div%2==0)
        {
            div/=2;
            cnt++;
        }
        if(cnt==0||div!=1)
            cout<<-1<<endl;
        else
            cout<<cnt<<endl;
    }
    return 0;
}
