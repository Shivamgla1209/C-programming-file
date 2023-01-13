#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s[100];
    gets(s);
    for(i=0;s[i]!='\0';i++);
    printf("%d ",i);
    return 0;
}