#include<stdio.h>
void main()
{
int i=0,j=0;
char a[50],b[50];
printf("Enter two strings\n");
scanf("%s%s",a,b);

for(i;a[i]!='\0';i++);

for(j;b[j]!='\0';j++)
{
a[i+j]=b[j];
}
printf("strings :  %s",a);
}