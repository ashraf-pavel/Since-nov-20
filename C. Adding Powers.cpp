#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        int flag=0;
        cin>>n>>k;
        vector<int>v(n);
        int one=0;
        for(int i=0;i<n;i++)cin>>v[i];
        for(int i=0;i<n;i++)
        {
            if((v[i]%k==0||v[i]==0||v[i]==1)&&one==0)
            {
                flag=0;
                one++;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
