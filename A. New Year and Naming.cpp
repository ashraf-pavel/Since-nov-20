#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s[21],t[21];
    for(int i=0;i<n;i++)cin>>s[i];
    for(int i=0;i<m;i++)cin>>t[i];
    int tc;
    cin>>tc;
    while(tc--)
    {
        int y;
        cin>>y;
        cout<<s[(y-1)%n]+t[(y-1)%m]<<endl;
    }
}
