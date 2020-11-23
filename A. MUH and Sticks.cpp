#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l[6];
    set<int>s;
    for(int i=0;i<6;i++)
    {
        cin>>l[i];
    }
    sort(l,l+6);
    if(l[0]==l[3])
    {
        if(l[4]==l[5])
            cout<<"Elephant\n";
        else
            cout<<"Bear\n";
    }
    else if(l[2]==l[5])
    {
        if(l[0]==l[1])
            cout<<"Elephant\n";
        else
            cout<<"Bear\n";
    }
    else if(l[1]==l[4])
        cout<<"Bear\n";
    else
        cout<<"Alien\n";
}
