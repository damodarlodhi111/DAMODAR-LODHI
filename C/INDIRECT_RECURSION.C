#include<stdio.h>
#include<conio.h>
void fun1(int a)
{
    if (a > 0)
    {
    void fun2(int);
	fun2 (a - 1);
	printf("%d\n", a);
    }
}
void fun2(int b)
{
    if(b > 0)
    {
	fun1(b - 3);
	printf("%d\n", b);
    }
}
int main ()
{
    //void fun2(int);
    clrscr();
    int v;
    printf("Enter a number\n");
    scanf("%d",&v);
    printf("\n\n");
    fun1 (v);
    getch();
}