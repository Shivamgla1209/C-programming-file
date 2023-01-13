#include<stdio.h>
int main()
{
    int n,m,i,j,sr=0,sc=0;
    printf("enter the rows and columns=\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("enter the elements=\n");
    for(i=0;i<m;i++)for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    sr+=a[i][j];printf("r%d=%d\n",i+1,sr);sr=0;
}
 for(j=0;j<n;j++)
{
    for(i=0;i<m;i++)
    sc+=a[i][j];printf("c%d=%d\n",i+1,sc);sc=0;
}   return 0;}