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
#define clr(x,y) memset(x,y,sizeof x)
#define valid(x,y) (x>=0&&x<n &&y>=0&&y<m)

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
int ar[MAX];

int main()
{
    FAST
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        ll n,m,k;
        string s,t;
        cin>>n>>k;
        int sum=0;
        bool all=true,some=false;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]!=k)all=false;
            if(ar[i]==k)some=true;
            sum+=ar[i]-k;
        }
        if(all)cout<<"0\n";
        else if(!sum or some)cout<<"1\n";
        else cout<<"2\n";

    }
    return 0;
}