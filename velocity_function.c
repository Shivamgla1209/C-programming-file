#include<stdio.h>
int velocity(int l,int t)
{
    int s=l/t;
    return s;
}
float kmhr(int s)
{float v=(float)s*5/18;
//printf("%f",v);
    return v;
}
int main()
{
    int l,t;
    printf("entert the length & time=\n");
    scanf("%d%d",&l,&t);
    printf("%f",kmhr(velocity(l,t)));
return 0;
}