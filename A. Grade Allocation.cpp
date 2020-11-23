#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m,sum=0;
        cin>>n>>m;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        int ans=min(sum,m);
        cout<<ans<<endl;

    }
}
