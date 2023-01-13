#include<stdio.h>
int search(int* p,int* q,int n)
{int i,c=0;
    for(i=0;i<*q;i++)
    if(*(p+i)==*q)c++;
    if(c!=0)printf("yes");
    else printf("no");
return 0;}
int array(int a[],int* n)
{
    int i;
    for(i=0;i<*n;i++)
    scanf("%d",&a[i]);
    return 0;
}
int main()
{
    int n,e;
    printf("enter the size=\n");
    scanf("%d",&n);int a[n];
    printf("enter the elements=\n");
    array(a,&n);
    printf("enter the element you wana search=\n");
    scanf("%d",&e);
    search(a,&e,n);
    return 0;
}