#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+2];
    int cnt[1000000]={};
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        cnt[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int b,c;
        cin>>b>>c;
        int val=cnt[b];
        sum-=(b*val);
        sum+=(c*val);
        cout<<sum<<endl;
    }

}
