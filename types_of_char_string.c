#include<stdio.h>
#include<string.h>
int main()
{
    int i,d=0,c=0,s=0;
    char b[100];
    gets(b);
    for(i=0;b[i]!='\0';i++)
    {
        if((b[i]>=65&&b[i]<=92)||(b[i]>=97&&b[i]<=122))c++;
        if(b[i]>=48&&b[i]<=57)d++;
        else {s++;}
    }
    printf("char=%d num=%d sc=%d",c,d,s);
    return 0;
}