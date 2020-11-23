
#include<bits/stdc++.h>
#define pi acos(-1.0)
#define bsort(v) sort(v1.begin(),v1.end())
#define pb push_back
#define mp make_pair
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define MOD 1000000007
#define N 10000001

using namespace std;
typedef long long int ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;

int main()
{
    FAST
    int tc=1;
    //cin>>tc;
    while(tc--)
    {
        ll n,m,k,sum=0,ans=1,cnt=0;
        cin>>n>>m;
        if(m%n)
        {
            cout<<-1<<endl;
        }
        else
        {
            int div=m/n;
            while(div%2==0)
            {
                div/=2;
                cnt++;
            }
            while(div%3==0)
            {
                div/=3;
                cnt++;
            }
            if(div>1)
               cout<<-1<<endl;
            else
            cout<<cnt<<endl;
        }


    }
    return 0;
}
