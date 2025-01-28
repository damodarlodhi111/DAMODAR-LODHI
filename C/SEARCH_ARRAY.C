#include<stdio.h>
void main()
{
int a[10],s,i,c=0;
printf("Enter 10 numbers \n");
for(int i=0 ;i<10;i++)
scanf("%d",&a[i]);
printf("Enter the element you searched : ");
scanf("%d",&s);
for (int j=0;j<10;j++)
if(a[j]==s)
  {
  c=printf("find %d at a[%d]",s,j); break ;
  }

if(c==0)
 printf("%d not found",s);
}