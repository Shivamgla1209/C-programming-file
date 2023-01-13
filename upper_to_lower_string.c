#include<stdio.h>
#include<string.h>
int main()
{int i;
    char s[100],a[100];
    gets(s);
    for(i=0;s[i]!='\0';i++)
{
    if(s[i]>=65&&s[i]<=91)s[i]=s[i]+32;
}
printf("%s",s);
return 0;
}