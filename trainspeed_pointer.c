#include<stdio.h>
int speed(float,float);
int main()
{
    float l,t;
    printf("enter the lenth and time taken to cross=\n");
    scanf("%f%f",&l,&t);
    speed(l,t);
    return 0;
}
int speed(float l,float t)
{float s=l/t;
printf("speed=%f",s);
    return 0;
}