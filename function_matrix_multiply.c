#include<stdio.h>
void matrix_multiply()
{

    int a[3][3], b[3][3], c[3][3];
    int i, j, k;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            printf("enter the elements if matrix a\n ");
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            printf("enter the elements if matrix b \n");
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("  %d\t", c[i][j]);
        }
        printf("\n");
    }
}
int main(){
    matrix_multiply();
    return 0;
}