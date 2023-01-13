#include<stdio.h>
int result(int *p,int *q,int *r)
{
    int i;
    for(i=0;i<*r;i++)
    {
        if(*(p+i)>*(q+i))printf("ria %d\n",*(p+i));
        if(*(p+i)<*(q+i))printf("sia %d\n",*(q+i));
        else printf("both have same marks %d\n",*(p+i));
    }
}
int array(int a[],int* n)
{
    int i;
    for(i=0;i<*n;i++)
    scanf("%d",&a[i]);
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    array(a,&n);
    array(b,&n);
    result(a,b,&n);
}