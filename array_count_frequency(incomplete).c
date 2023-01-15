#include<stdio.h>

int main(){
    int a[10],b[1000]={0},i ,n, max;
    for ( i = 0; i < 10; i++)
    max =a[0];
     printf("enter how many elements the array wil have");
    scanf("%d", &n);
    for (i = 0; i < n; i++)

    {
        printf("enter the elements of array %d", i);
        scanf("%d", &a[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
        
    }
    for ( i = 0; i <10; i++)
    {
        b[a[i]]++;
    }for ( i = 0; i < max; i++)
    {
        if (b[i]>0)
        {
            printf("%d=%d",i,b[i]);
        }
        
    }
    
    
    

    
    
    
    return 0;
}