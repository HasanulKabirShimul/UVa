#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,c,i,j=0,x,check=0,k=0;
    scanf("%d %d",&n,&c);
    int A[n+5];
    x = sqrt(n);
    for(i=1;i<=n;i++)
    {
        A[j] = i;
        j++;
    }
    for(i=2;i<=x;i++)
    {
        A[0] = 1;
        A[1] = 2;
    }
}
