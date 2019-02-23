#include<bits/stdc++.h>
using namespace std;
char square[30][30];
int visited[30][30];
int cnt,n;
void dfs(int i,int k)
{
    if(square[i][k]=='0' || visited[i][k]==1) return;

    if(square[i][k]=='1') visited[i][k] = 1;

    if(square[i][k+1]=='1') dfs(i,k+1);
    if(square[i][k-1]=='1') dfs(i,k-1);
    if(square[i-1][k]=='1') dfs(i-1,k);
    if(square[i-1][k+1]=='1') dfs(i-1,k+1);
    if(square[i-1][k-1]=='1')  dfs(i-1,k-1);
    if(square[i+1][k-1]=='1') dfs(i+1,k-1);
    if(square[i+1][k]=='1') dfs(i+1,k);
    if(square[i+1][k+1]=='1') dfs(i+1,k+1);
}
int main()
{
    int t=1;
    while(cin>>n)
    {
        getchar();
        for(int i=0;i<n;i++)
        {
            for(int k=0;k<n;k++)
            {
                cin>>square[i][k];
            }
        }
        memset(visited,0,sizeof(visited));
        cnt =0;
        for(int i=0;i<n;i++)
        {
            for(int k=0;k<n;k++)
            {
                if(square[i][k]=='1' && visited[i][k]!=1)
                {
                    dfs(i,k);
                    cnt++;
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",t++,cnt);
        memset(square,'\0',sizeof(square));
    }
    return 0;
}
