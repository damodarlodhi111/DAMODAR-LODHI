#include<stdio.h>
void main()
{
int a[10],s,oc=0;
printf("Enter 10 numbers \n");
for(int i=0 ;i<10;i++)
scanf("%d",&a[i]);
printf("Enter the element you searched : ");
scanf("%d",&s);
for (int j=0;j<10;j++)
if(a[j]==s)
  	oc+=1;
if(oc==0)
 printf("element not found");
 else
printf("%d find %d times",s,oc);
}