#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i=1,n,d;
printf("Enter mumber n : ");
scanf("%d",&n);
while(i<=n)
  {
  d=i+i;
  printf("double value of %d = %d\n",i,d);
  i++;
  }

getch();
}