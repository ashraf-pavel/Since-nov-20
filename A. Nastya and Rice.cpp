#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        if((a-b)*n>(c+d)||(a+b)*n<(c-d))
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
}
