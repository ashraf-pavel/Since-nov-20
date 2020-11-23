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
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    FAST
    int tc=1;
    //cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        int cc=n;
        if(n==1)
        {
            if(!k)
                cout<<1<<endl;
            else
            cout<<-1<<endl;
            continue;
        }
        //cout<<(n+1)/2<<endl;
        if(n/2>k)
            cout<<-1<<endl;
        else
        {
            int x=k-(n-2)/2;
            cout<<x<<" "<<2*x<<" ";
            if(n&1)
            {
                n-=3;
                int val=2*x+1;
                while(n--)
                    cout<<val++<<" ";


                cout<<2*cc+1<<" ";
            }
            else
            {
                n-=2;
                int val=2*x+1;
                while(n--)
                    cout<<val++<<" ";
            }
            cout<<endl;

        }

    }
    return 0;
}


