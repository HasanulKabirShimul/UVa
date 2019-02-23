#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,num[1000],x,i,r,d,y;
    cin>>T;
    while(T--)
    {
        cin>>r;
        for(i=1;i<=r;i++)
        {
            cin>>num[i];
        }
        sort(num+1,num+r+1);
        for(i=1;i<=r;i++)
        {
            cout<<num[i]<<" ";
        }
        cout<<endl;
        x = num[1];
        y = num[r];
        d = abs(num[r]-num[1]);
        cout<<d<<endl;
    }
    return 0;
}
