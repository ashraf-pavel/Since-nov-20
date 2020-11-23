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
    //cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        bool flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                s.erase(s.begin()+i);
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<s<<endl;
        else
        {
            for(int i=0;i<s.size()-1;i++)
                cout<<s[i];
            cout<<endl;
        }
    }
    return 0;
}


