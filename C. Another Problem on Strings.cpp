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
int dp[1000050];
ll cnt=0,sum=0,k;
main()
{
    string s;
    cin>>k;
    cin>>s;
    dp[0]=1;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
            cnt++;
        if(cnt>=k)
            sum+=dp[cnt-k];
        dp[cnt]++;
    }
    cout<<sum<<endl;
}

