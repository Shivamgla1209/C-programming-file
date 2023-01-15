#include <stdio.h>

int main()
{

    int n;
    printf("enter the size of the pattern  ");
    scanf("%d", &n);
    char a[n][n];
    a[n][n];
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || j == n - 1 || i == n - 1||i==j||(i+j)==n-1)
            {
                printf("*\t", a[i][i]);
            }
            else
            {
                printf("\t");
            }
           
        } printf("\n");
    }
    return 0;
}