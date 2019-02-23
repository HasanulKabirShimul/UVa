#include<stdio.h>
#include<string.h>
#define N 500
int main()
{
    char m1[N];
    char m2[N];
    char m3[N];
    char m4[N];
    int temp;
    int i,j,l1,l2,l;
    while(scanf("%s %s",m1,m2)!=EOF)
    {
        int result[N] = {0};
    l1 = strlen(m1);
    l2 = strlen(m2);
    l = 0;
    for(i=l1-1; i>=0; i--)
    {
        m3[l1-1-i] = m1[i] -'0';
    }
    for(i=l2-1; i>=0; i--)
    {
        m4[l2-1-i] = m2[i] -'0';
    }
    for(i=0; i<l2; i++)
    {
        for(j=0; j<l1; j++)
        {
            result[i+j] += (m4[i]*m3[j]);
        }
    }
    for(i=0; i<l1+l2; i++)
    {
        temp = result[i]/10;
        result[i] = result[i]%10;
        result[i+1] = result[i+1]+temp;

    }
     /*for(i=0;i<l1+l2;i++)printf("ara[%d]=%d ",i,result[i]);*/
    for(i=l1+l2-1; i>=0; i--)
    {
        if(result[i]>0)
        {
            l= i;
            break;
        }

    }
    for(i=l; i>=0; i--)
    {
        printf("%d",result[i]);
    }
    printf("\n");
    }
    return 0;

}
