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
        int n;
        cin>>n;
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i])
                sum1++;
            else
                sum2++;
        }
        if(sum1>sum2)
        {
            if((n/2)%2)
            {
                cout<<n/2+1<<endl;
                for(int i=0;i<n/2+1;i++)
                    cout<<1<<" ";
            }
            else
            {
                cout<<n/2<<endl;
                for(int i=0;i<n/2;i++)
                    cout<<1<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<n/2<<endl;
            for(int i=0;i<n/2;i++)
                cout<<0<<" ";
            cout<<endl;
        }
    }
    return 0;
}
