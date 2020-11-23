
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
        string s;
        int x;
        cin>>s>>x;
        int n=s.size();
        string w(n,'1');
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(i-x>=0)w[i-x]='0';
                if(i+x<n)w[i+x]='0';
            }
        }
        bool ok=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                if((i-x<0 or w[i-x]=='0') and (i+x>=n or w[i+x]=='0'))
                    ok=1;
            }
        }
        if(ok)
            cout<<-1<<endl;
        else
            cout<<w<<endl;

    }
    return 0;
}
