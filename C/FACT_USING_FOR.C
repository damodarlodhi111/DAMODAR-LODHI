#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,fact=1;
printf("Enter mumber n : ");
scanf("%d",&n);
for(n;n;n--)
  {
  fact*=n;
  }
printf("factorial is %d ",fact);
getch();
}