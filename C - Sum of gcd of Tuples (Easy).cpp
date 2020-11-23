#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    long long ans=0;
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=k;j++)
        {
            for(int z=1;z<=k;z++)
            {
                int x=__gcd(i,j);
                ans+=__gcd(x,z);
            }
        }
    }
    cout<<ans<<endl;
}
