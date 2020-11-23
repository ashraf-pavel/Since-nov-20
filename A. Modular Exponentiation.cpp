#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n>m)
    {
        cout<<m<<endl;
        return 0;
    }
    long long mod=pow(2,n);
    cout<<m%mod<<endl;
}
