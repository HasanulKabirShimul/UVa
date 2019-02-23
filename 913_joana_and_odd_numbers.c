#include<stdio.h>
int main()
{
    long int n ,last, ans,i;
    while(scanf("%ld",&n)==1)
    {
    last = n*(n+2)/2;
    ans = 3*last -6;
    printf("%ld\n",ans);
    }
    return 0;
}

