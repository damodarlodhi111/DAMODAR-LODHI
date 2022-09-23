#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i=1,n,sum=0;
printf("Enter mumber n : ");
scanf("%d",&n);
while(i<=n)
  {
  printf("%d\n",i);
  sum+=i;
  i++;
  }
printf("sum of n numbers = %d",sum);
getch();
}