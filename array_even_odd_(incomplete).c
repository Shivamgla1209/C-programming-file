
#include <stdio.h>
void main()
{
    int n, i, j, k, l, m, temp;
    int a[100];
    int b[100];
    int c[100];
    int count1 = 0;
    int count2 = 0;

    printf("enter how many elements the array wil have");
    scanf("%d", &n);
    for (i = 0; i < n; i++)

    {
        printf("enter the elements of array %d", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {

        for (m = 0; m < n; m++)
        {
            if (a[m] % 2 == 0)

            {
               
                 b[m]=a[m];
            }
        }
    }

    for (i = 0; i < n; i++)
    {

        for (m = 0; m < n; m++)
        {
            if (a[m] % 2 == 1)
            {
                
                c[m]=a[m];
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        /* code */ printf("the values in aray b is %d\n", b[m]);
    }

    for (i = 0; i < n; i++)
    {
        /* code */ printf("the values in aray c is %d\n", c[m]);
    }
}