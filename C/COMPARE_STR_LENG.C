#include<stdio.h>
#include<conio.h>
void main()
{
int c=0,i,l1=0,l2=0;
char a[50],b[50];
printf("Enter two strings\n");
scanf("%s%s",&a,&b);
for(i=0;a[i]!='\0';i++)
{
l1++;
}
for(i=0;b[i]!='\0';i++)
{
l2++;
}
if(l1>l2)
{
printf("1st string is longer than 2nd\n");
}
else
{
 if(l2>l1)
 {
 printf("2nd string is longer than 1st\n");
 }
 else
 {
 printf("both strings are equal\n");
 }
}
if(l1>=l2)
{
for(i=0 ;i<l1;i++)
{
if(a[i]==b[i])
{
c++;
}
}
}
else
{
for(i=0 ;i<l2;i++)
{
if(a[i]==b[i])
{
c++;
}
}
}
if(l1==l2)
{
if(l1==c)
{
printf("strings are totaly equal");
goto z;
}
printf("strings %d char are same",c);
}
if(c==0)
{
printf("strings are not equal");
}
else
{
printf("strings %d char are same",c);
}
z:
getch();
}