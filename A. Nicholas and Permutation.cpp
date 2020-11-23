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
        vector<int>v(n);
        int idx,idx2;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int val1=1,val2=n;
        for(int i=0;i<n;i++)
        {
            if(v[i]==val1){
                idx=i+1;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==val2){
                idx2=i+1;
                break;
            }
        }
        idx2=max(idx2,idx);
        idx=min(idx2,idx);
        cout<<idx2<<idx<<endl;
        cout<<min(n-1,idx2-idx+2)<<endl;


    }
    return 0;
}


