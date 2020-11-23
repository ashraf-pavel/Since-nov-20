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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int i,j=1;
        bool flag=true;
        for(i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                for( j=i+1;j<n;j++)
                {
                    if(a[j]==1)
                    {
                        int d=j-i;
                        if(d<6)
                        {
                            flag=false;
                            break;
                        }
                        break;
                    }
                }
            }
        }
        if(flag)
           cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
