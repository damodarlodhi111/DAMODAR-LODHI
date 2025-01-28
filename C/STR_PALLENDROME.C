#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n=0;
char a[50];
printf("Enter a string\n");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
n++;
}
printf("length = %d\n",n);

for(i=0,j=n-1;i<j;i++,j--)
{
  if(a[i]!=a[j])
  break;
}
if(i<j)
  printf("string is not pallendrom ");
else
  printf("string pallendrom  ");

getch();
}