#include<stdio.h>
#include<conio.h>
class book
{
 int a,b,c,d,e,f,g,h,i,j;
 char sub[15];
 public:
 void ex_qu()
 {
  printf("Enter sub: ");
  scanf("%s",&sub);
  printf("Enter %s book total que no. in :-\n",sub);
  printf("exercise a:");
  scanf("%d",&a);
  printf("exercise b:");
  scanf("%d",&b);
  printf("exercise c:");
  scanf("%d",&c);
  printf("exercise d:");
  scanf("%d",&d);
  printf("exercise e:");
  scanf("%d",&e);
  printf("exercise f:");
  scanf("%d",&f);
  printf("exercise g:");
  scanf("%d",&g);
  printf("exercise h:");
  scanf("%d",&h);
  printf("exercise i:");
  scanf("%d",&i);
  printf("exercise j:");
  scanf("%d",&j);
 }
 friend void total();
};


void total()
{
 book z;
 z.ex_qu();
 int total= z.a+z.b+z.c+z.d+z.e+z.f+z.g+z.h+z.i+z.j;
 printf("\n%s book total exercise que = %d",z.sub,total);
}

void main()
{
 clrscr();
 total();
 getch();
}