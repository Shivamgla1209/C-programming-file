#include<stdio.h>

int main(){
    
int n;
    printf("enter the size of the pattern  ");
    scanf("%d",&n);
    char a[n][n];
    a[n][n];
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           a[i][i]='*';
            
        }
        
    }
     for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            
            printf("%c",a[i][i]);
        }
        printf("\n");
    }
    return 0;
}