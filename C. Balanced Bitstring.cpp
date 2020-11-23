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
        int n,k;
        cin>>n>>k;
        string s,st;
        cin>>s;
        for(int i=0;i<k;i++)st+='?';
        bool ok=false;
        for(int i=0;i<n;i++)
        {
            if(st[i%k]=='?')
                st[i%k]=s[i];
             else if(st[i%k]!=s[i] && s[i]!='?')
                ok=true;
        }
        if(ok)
            cout<<"NO\n";
        else
        {
            int cnt0=0,cnt1=0,cnt=0;
            for(int i=0;i<k;i++)
            {
                if(st[i]=='0')
                    cnt0++;
                else if(st[i]=='1')
                    cnt1++;
                else
                    cnt++;
            }
            if(min(cnt0,cnt1)+cnt<max(cnt0,cnt1))
                ok=true;
            if(ok)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }

    }
    return 0;
}

