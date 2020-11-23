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
        int s,n;
        cin>>s>>n;
        if(s<=n)
        {
            if(s==n)
                cout<<1<<endl;
            else if(s==1)
                cout<<1<<endl;
            else if(s&1)
                cout<<2<<endl;
            else
                cout<<1<<endl;
        }
        else
        {
            int cnt=0;
            if(s&1)
            {
                s--;
                cnt=1;
            }
            int div=s/n;
            int rem=s%n;
            cnt+=div;
            if(rem==0)
            cout<<cnt<<endl;
            else
                cout<<cnt+1<<endl;
        }


    }
}


