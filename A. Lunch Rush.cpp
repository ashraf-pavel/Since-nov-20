#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int mx=-10e9,x;
    int f,t;
    for(int i=0;i<n;i++)
    {
        cin>>f>>t;
        if(t>k)
            x=f-(t-k);
        else
            x=f;
        if(x>mx)
            mx=x;
    }
    cout<<mx<<endl;
    //main();
}
