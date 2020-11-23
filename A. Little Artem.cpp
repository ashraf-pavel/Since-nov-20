
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int row,col;
        cin>>row>>col;
        for(int i=0;i<row;i++)
        {
            string s="";
            for(int j=0;j<col;j++)
            {
                if(i==0&&j==0)
                    s+='W';
                else
                    s+='B';
            }
            cout<<s<<endl;
        }

    }
}
