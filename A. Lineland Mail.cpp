#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    long long ans1,ans2;
    ans1=abs(v[0]-v[1]);
    ans2=abs(v[0]-v[n-1]);
    cout<<ans1<<" "<<ans2<<endl;
    for(int i=1;i<n-1;i++)
    {
        ans1=min(abs(v[i]-v[i+1]),abs(v[i]-v[i-1]));
        ans2=max(abs(v[i]-v[n-1]),abs(v[i]-v[0]));
        cout<<ans1<<" "<<ans2<<endl;
    }
    cout<<v[n-1]-v[n-2]<<" "<<v[n-1]-v[0]<<endl;
}
