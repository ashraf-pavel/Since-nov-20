#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long a,b,x;
        cin>>a>>b>>x;
        unsigned long long c=pow(a,b);
        cout<<c-(c%x)<<endl;
    }
}
