#include<stdio.h>
#include<string.h>
int main()
{
    int l1,l2,i,j,k=0,s,l;
    char s1[500];
    char s2[500];
    char m1[500];
    char m2[500];
    char p[500]={0};
    while(scanf("%s %s",s1,s2))
    {
        l1 = strlen(s1);
        l2 = strlen(s2);
        for(i=l-1;i>=0;i--)
        {
           m1[l1-1-i] = s1[i]-'0';
        }
        for(i=l2-1;i>=0;i--)
        {
          m2[l2-1-i] = s2[i]-'0';
        }
        for(i=0;i<l1;i++)
        {
            for(j=0;j<l2;j++)
            {
               p[i+j] += m1[i]*m2[j];
            }
        }
    }
