#include<stdio.h>
int main()
{
    int n,m,i,j,c=0;
    printf("enter the rows and columns=\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("enter the elements=\n");
    for(i=0;i<m;i++)for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<m;i++){for(j=0;j<n;j++)
    
    if(i<j)if(a[i][j]!=0)c=1;break;}
    if(c==0)for(i=0;i<m;i++){for(j=0;j<n;j++)
    printf("%d ",a[i][j]);printf("\n");}
    else printf("its not triangle matrix;");
    return 0;}