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

bool isPrime(int n)
{
    for(int i=2; i*i<=n; i++)
        if(n%i==0)
            return false;
    return true;
}

bool isdiv(int n)
{
   // printf("? ");
    printf("%d\n",n);
    fflush(stdout);
    char s[5];
    scanf("%s",s);
    return s[0]=='y';
}

int main()
{
    FAST
    int cnt=0;
    for(int i=2; i<=50 and cnt<2; i++)
    {
        if(isPrime(i))
        {
            if(isdiv(i))
            {
                cnt++;
                if(i*i<=100 and isdiv(i*i))
                    cnt++;
            }
        }
    }
   if(cnt>=2)
    printf("composite");
   else
    printf("prime");

    return 0;
}