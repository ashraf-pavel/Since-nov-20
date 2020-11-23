#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n;
    cin>>k>>n;
    vector<int>v(n+2);
    long long sum=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++)
    {
        sum+=abs(v[i]-v[i-1]);
    }
    for(int i=0;i<n;i++)
    {
        cnt+=abs(k-v[i]);
    }
    cout<<min(sum,cnt)<<endl;
}
