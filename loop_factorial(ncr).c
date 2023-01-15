#include<stdio.h>
int ncr_fact(int );
void main()

{
 int n,p,r;
  scanf("%d",&n);
  scanf("%d",&r);
 printf("%d",(ncr_fact(n))/((ncr_fact(n-r))*(ncr_fact(r))));
}

int  ncr_fact(int n)
{
    int i;
     int factorial=1;
    
     for (int i = 1; i <= n; i++)
     {
       factorial=factorial*i;
     }
  return factorial;
}
