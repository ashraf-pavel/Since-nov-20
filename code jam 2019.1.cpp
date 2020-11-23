#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int z=1; z<=tc; z++)
    {
        int n,k;
        cin>>n>>k;
        int ar[n];
        for(int i=0; i<n; i++)
            cin>>ar[i];
        int sum=0;
        sort(ar,ar+n);
        for(int i=0; i<k; i++)
            sum=sum+ar[k-1]-ar[i];
        int mn=sum;

        for(int i=k; i<n; i++)
        {
            sum=sum-(ar[i-1]-ar[i-k])+((ar[i]-ar[i-1])*(k-1));
            if(sum<mn)
            {
                mn=sum;
            }
        }
        cout<<"Case #"<<z<<": ";
        cout<<mn<<endl;
    }
}
