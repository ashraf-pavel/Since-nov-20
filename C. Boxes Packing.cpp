#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int ans=0;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        ans=max(ans,mp[a[i]]);
    }
    /*sort(a,a+n);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
                cnt++;
        }
        ans=max(ans,cnt);
    }*/
    cout<<ans<<endl;
}
