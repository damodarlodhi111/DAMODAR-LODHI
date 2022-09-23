#include<stdio.h>
void main()
{
int a[10],n,i,j,t;
printf("Enter number n :");
scanf("%d",&n);
printf("Enter %d numbers\n",n);
for(i=0 ;i<n;i++)
	scanf("%d",&a[i]);
for(j=0;j<(n-1);j++)
 for(i=j+1;i<n;i++)
  if(a[j]<a[i])
  {
   t=a[j];
   a[j]=a[i];
   a[i]=t;
  }
printf("shorted array [");
for(i=0;i<n;i++)

printf(" %d",a[i]);

printf(" ]");
}