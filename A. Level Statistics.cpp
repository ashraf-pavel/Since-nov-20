#include<bits/stdc++.h>
using namespace std;

#define pi acos(-1.0)
#define bsort(v) sort(v.begin(),v.end())
#define pb push_back
#define mp make_pair
#define N 2000000
#define F first
#define S second

typedef long long int ll;
typedef pair<ll,ll>pii;
const int MOD=1e9+7;
int flag[N+10];
vector<int>primes(N);

void seive()
{
    for(int i=0; i<N; i++)
        flag[i]=0;
    for(int i=4; i<=N; i+=2)
        flag[i]=1;
    for(int i=3; i<=sqrt(N); i++)
    {
        if(flag[i]==0)
        {
            for(int j=i+i; j<=N; j+=i)
                flag[j]=1;
        }
    }
    flag[2]=1;
    for(int i=2; i<=N; i++)
    {
        if(flag[i]==1)
            primes.pb(i);
    }
}

int phi(int n)
{
    int result=n;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n/=i;
            }
            result-=result/i;
        }
    }
    if(n>1)
        result-=result/n;
    return result;
}

main()
{
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        ll n,m;

        cin>>n;

        pair<int,int>p[n];
        for(int i=0; i<n; i++)
        {
            cin>>p[i].first>>p[i].second;
        }


        int flag=0;

        for(int i=1; i<n; i++)
        {
              if(p[i].F<p[i-1].F)
              {
                  flag=1;
                  break;
              }
              if(p[i].F==p[i-1].F&&p[i].S!=p[i-1].S)
              {
                  flag=1;
                  break;
              }
              if(p[i].F>p[i-1].F&&p[i].S<p[i-1].S)
              {
                  flag=1;
                  break;
              }
              if(p[i-1].F<p[i-1].S)
              {
                  flag=1;
                  break;
              }
              if(p[i].F-p[i-1].F<p[i].S-p[i-1].S)
              {
                  flag=1;
                  true;
              }
        }
        if(p[n-1].F<p[n-1].S)
        {
            flag=1;
        }

        if(flag)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}

