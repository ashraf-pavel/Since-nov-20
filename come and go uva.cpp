#include<bits/stdc++.h>
using namespace std;

#define mx 100000
#define pb push_back
vector<int>adj1[10000],adj2[10000];
bool vis1[10000],vis2[10000];
stack<int>stt;
int tim=0,cnt=0;;

void allzero()
{
    memset(vis1,0,sizeof vis1);
    memset(vis2,0,sizeof vis2);
    for(int i=0; i<=10000; i++)
    {
        adj1[i].clear();
        adj2[i].clear();
    }
    cnt=0;
}

void dfs(int src)
{
    vis1[src]=true;
    for(int i=0; i<adj1[src].size(); i++)
    {
        int x=adj1[src][i];
        if(!vis1[x])
        {
            vis1[x];
            dfs(x);
        }
    }
    stt.push(src);
}

void rev_dfs(int s)
{
    vis2[s]=true;
    for(int i=0; i<adj2[s].size(); i++)
    {
        int x=adj2[s][i];
        if(!vis2[x])
        {
            vis2[x]=true;
            rev_dfs(x);
        }
    }
}

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        allzero();
        if(n==0&&m==0)
            break;
        int u,v,w;
        for(int i=0;i<m;i++)
        {
            cin>>u>>v>>w;
            if(w==1)
            {
                adj1[u].pb(v);
                adj2[v].pb(u);
            }
            else if(w==2)
            {
                adj1[u].pb(v);
                adj1[v].pb(u);
                adj2[u].pb(v);
                adj2[v].pb(u);
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(!vis1[i])
                dfs(i);
        }
        while(!stt.empty())
        {
            int x=stt.top();
            if(!vis2[x])
            {
                cnt++;
                rev_dfs(x);
            }
            stt.pop();
        }
        if(cnt==1)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
