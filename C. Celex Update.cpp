#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long x1,y1,x2,y2,x,y;
        cin>>x1>>y1>>x2>>y2;
        x=x2-x1;
        y=y2-y1;
        cout<<(x*y)+1<<endl;
    }
}
