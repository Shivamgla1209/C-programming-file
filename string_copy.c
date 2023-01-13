#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char s[100],a[100];
    gets(s);
    for(i=0;s[i]!='\0';i++);
    for(j=0;j<=i;j++)
    a[j]=s[j];
    printf("%s",a);
    return 0;
}