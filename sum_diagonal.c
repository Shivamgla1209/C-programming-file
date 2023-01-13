#include<stdio.h>
int main()
{
    int n,m,i,j,d=0;
    printf("enter the rows and columns=\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("enter the elements=\n");
    for(i=0;i<m;i++)for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<m;i++){for(j=0;j<n;j++)
if(i==j)d+=a[i][j];}
printf("sum of diagonal=%d",d);
    return 0;}