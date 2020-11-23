#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
int n;
pair<int,int>p[101];
bool vis[101];
void dfs(int src)
{
    vis[src]=1;
    for(int i=0;i<n;i++)
    {
        if(!vis[i]&&(p[src].F==p[i].F||p[src].S==p[i].S))
            dfs(i);
    }
}


int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p[i].F>>p[i].S;
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            ans++;
            dfs(i);
        }
    }
    cout<<ans-1<<endl;
}
