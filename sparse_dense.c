#include<stdio.h>
int main()
{
    int n,m,e=0,z=0,i,j;
    printf("enter the rows and columns=\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("enter the elements=\n");
    for(i=0;i<m;i++)for(j=0;j<n;j++)
 {   scanf("%d",&a[i][j]);
if(a[i][j]==0)z++;
else e++;
}if(z>e)printf("sparse");
else printf("danse");
    return 0;}