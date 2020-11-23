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
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0; i<n; i++)
            cin>>a[i];
        if(a[0]==10||a[0]==15)
        {
            cout<<"NO\n";
            continue;
        }
        bool flag=false;
        int cnt[20];
        cnt[5]=0,cnt[10]=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==5)
                cnt[5]++;
            else if(a[i]==10)
            {
                cnt[10]++;
                cnt[5]--;
                if(cnt[5]<0)
                {
                    flag=true;
                    break;
                }
            }
            else if(a[i]==15)
            {
                if(cnt[10])
                {
                    cnt[10]--;
                }
                else
                {
                    cnt[5]-=2;
                    if(cnt[5]<0)
                    {
                        flag=true;
                        break;
                    }
                }
            }
        }
        if(flag)
            cout<<"NO\n";
        else
            cout<<"YES\n";

    }
    return 0;
}


