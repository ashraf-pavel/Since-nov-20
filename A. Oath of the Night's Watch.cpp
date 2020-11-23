#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],mn=1e9,mx=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mn=min(mn,a[i]);
        mx=max(mx,a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=mx&&a[i]!=mn)
            cnt++;
    }
    cout<<cnt<<endl;
}
