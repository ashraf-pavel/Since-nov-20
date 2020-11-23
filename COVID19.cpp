#include<bits/stdc++.h>
#define pi acos(-1.0)
#define bsort(v) sort(v.begin(),v.end())
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
    cin>>tc;
    while(tc--)
    {
        ll n,m,k,sum=0,ans=1,cnt=0,cnt1=0,cnt2=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        cout<<ans<<" "<<cnt<<endl;
    }
    return 0;
}

