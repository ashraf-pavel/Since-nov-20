#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int ans;
        for(int i=1;i<=n;i++)
        {
            if(v[i-1]>=i)
                ans=i;
        }
        cout<<ans<<endl;
    }
}
