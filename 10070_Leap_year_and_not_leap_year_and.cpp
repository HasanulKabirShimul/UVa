#include<bits/stdc++.h>
using namespace std;
int func(char *s,int mod)
{
    int result = 0;
    int l = strlen(s),i;

    for(i=0; i<l; i++)
    {
        result = (result*10 + s[i]-48)%mod;
    }
    return result;
}
int main()
{
    char s[1000000];
    int baal = 0;
    while(cin>>s)
    {
        if(baal!=0)
            cout<<endl;
        baal = 1;
        int flag=0,leap = 0;
        int mod;
        mod = 4;
        int n1 = func(s,mod);
        mod = 100 ;
        int n2 = func(s,mod);
        mod = 400;
        int n3 = func(s,mod);
        mod = 55;
        int n4 = func(s,mod);
        mod = 15;
        int n5 = func(s,mod);
        if((n1==0 && n2!=0)||(n3==0))
        {
            cout<<"This is leap year."<<endl;
            leap = 1;
            flag = 1;

        }
        if(n5==0)
        {
            cout<<"This is huluculu festival year."<<endl;
            flag = 1;
        }
        if(leap==1 && n4==0)
        {
            cout<<"This is bulukulu festival year."<<endl;
        }
        if(flag==0)
        {
            cout<<"This is an ordinary year."<<endl;
        }

    }
    return 0;

}
