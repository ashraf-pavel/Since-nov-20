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
        int a[105],b[105];
        for(int i=0;i<n;i++)
            cin>>a[i]>>b[i];
        ll sum=0,sum2=0,chef=0,mort=0;
        for(int i=0;i<n;i++)
        {
            sum=0,sum2=0;
           while(1)
           {
               if(a[i]==0)
                break;
               int rem=a[i]%10;
               sum+=rem;
               a[i]/=10;

           }
           while(1)
           {
               if(b[i]==0)
                break;
               int rem=b[i]%10;
               sum2+=rem;
               b[i]/=10;
           }
           //cout<<"s"<<sum<<endl;
           //cout<<"s2"<<sum2<<endl;
           if(sum>sum2)
           {
               chef++;
           }
           else if(sum2>sum)
           mort++;
           else{
            chef++;mort++;
           }
        }
        //cout<<chef<<endl<<mort<<endl;
        if(chef>mort)
            cout<<"0 "<<chef<<endl;
        else if(mort>chef)
            cout<<"1 "<<mort<<endl;
        else
            cout<<"2 "<<chef<<endl;;

    }
    return 0;
}


