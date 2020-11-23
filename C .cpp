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
        cin>>n;
        int a[n+2],odd=0,even=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2)
                odd++;
            else
                even++;
        }
        sort(a,a+n);
        if(odd%2==0&&even%2==0){
            cout<<"YES\n";
            continue;
        }
        for(int i=1;i<n;i++)
        {
            if(a[i]-a[i-1]==1)
            {
                cnt++;
                i++;
            }
        }
        int flag=0;
        for(int i=cnt;i>0;i--)
        {
            odd--;
            even--;
            if(odd%2==0&&even%2==0)
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;
}

