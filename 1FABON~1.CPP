//write a progrom to print fibonacci series.

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,n; 
a=0,b=1,c=0;
printf("Enter the no.");
scanf("%d",&n);
printf(" %d ",a);
for (int i=0;i<n-1;i++)
  {
  a=b;
  b=c;
  c=a+b;

  printf(" %d ",c);
  }
getch();
}
