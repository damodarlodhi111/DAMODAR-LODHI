#include<stdio.h>
void main()
{
int n,fact=1;
printf("Enter mumber n : ");
scanf("%d",&n);
while(n)
  {
  fact*=n;
  n--;
  }
printf("factorial is %d ",fact);
}