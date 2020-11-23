#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=1;i<=10000000;i++)
    {
        if(i%3==0||i%7==0)
            v.push_back(i);
    }
    sort(v.begin(),v.end());
    int k;
    cin>>k;
    cout<<v[k-1]<<endl;
}
