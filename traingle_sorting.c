#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);

    float a[n][3];
    float sum[n];
    float temp ;
    
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            printf("enter the elements if matrix %d\n ", i + 1);
            scanf("%f", &a[i][j]);
        }
    }
    float peri[n];
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            sum[i] += a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            peri[i] = sum[i] / 2;
        }
    }
    float area[n];
    for (int i = 0; i < n; i++)
    {

        area[i] = pow((peri[i] * (peri[i] - a[i][0]) * (peri[i] - a[i][1]) * (peri[i] - a[i][2])), 1.0 / 2);
    }
for (int i = 0; i < n; i++)
{
    if (area[i]<area[i+1])
    {
        
    }
    
}
    return 0;
}