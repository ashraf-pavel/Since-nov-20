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
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        int a[n+2][m+2];
        int cnt1=0,cnt2=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            bool flag=1;
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j])
                    flag=0;
            }
            if(flag)
                cnt1++;
        }
        for(int j=0;j<m;j++)
        {
            bool flag=1;
            for(int i=0;i<n;i++)
            {
                if(a[i][j])
                    flag=0;
            }
            if(flag)
                cnt2++;
        }
        cnt=min(cnt1,cnt2);

        if(cnt%2)
            cout<<"Ashish\n";
        else
            cout<<"Vivek\n";

    }
    return 0;
}


