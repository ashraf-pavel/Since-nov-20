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

int ask(int x,int y)
{
    cout<<"? "<<x+1<<" "<<y+1<<endl;
    int val;
    cin>>val;
    return val;
}

int main()
{
    FAST
    int n;
    cin>>n;
    int mx=0;
    vector<int>v(n,-1);
    int x,y;
    for(int i=1;i<n;i++)
    {
        cout<<"? "<<mx+1<<" "<<i+1<<endl;
        cin>>x;
        cout<<"? "<<i+1<<" "<<mx+1<<endl;
        cin>>y;
        if(x>y)
        {
            v[mx]=x;
            mx=i;
        }
        else
            v[i]=y;
    }
    v[mx]=n;
    cout<<"! ";
    for(int i=0;i<n;i++)cout<<v[i]<<" ";
    cout<<endl;
    cout.flush();
    return 0;
}

