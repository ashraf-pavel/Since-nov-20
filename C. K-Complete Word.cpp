#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        string s,s1[100];
        cin>>s;
        int j=0;
        for(int i=0;s[i]!='\0';i+=k)
        {
            s1[j]=s.substr(i,k-1);
            j++;
        }
        int cnt=0;

    }
}
