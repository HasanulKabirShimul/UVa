#include<bits/stdc++.h>
using namespace std;
int remainder(char *s,int mod)
{
    int i,result=0;
    int l =strlen(s);
    for(i=0;i<l;i++)
    result = (result*10 + s[i] -48)%mod;
    return result;

}
int main()
{
    char s[100000];
    int T,i,result,N,ans=0;
    int A[15];
    cin>>T;
    while(T--)
    {
        cin>>s;
        cin>>N;
        for(i=0;i<N;i++)
        {
            cin>>A[i];
        }
        for(i=0;i<N;i++)
        {
          ans = remainder(s,A[i]);
          if(ans!=0)
            break;
        }

        if(ans!=0)
            printf("%s - Simple.\n",s);
        else
            printf("%s - Wonderful.\n",s);

    }
    return 0;
}
