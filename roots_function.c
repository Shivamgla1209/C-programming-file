#include<stdio.h>
#include<math.h>
int root(int a,int b,int c)
{
    b=pow(b,2);
if((b-4*a*c)>=0)return 1;
else return 0;
}
int main()
{
    int a,b,c;
    printf("enter the coefficent=\n");
    scanf("%d%d%d",&a,&b,&c);
    if(root(a,b,c))printf("roots are positive.");
    else printf("roots are negative.");
    return 0;
}