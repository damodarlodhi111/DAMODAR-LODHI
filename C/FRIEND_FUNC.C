#include<iostream.h>
#include<conio.h>
class sample
{
int a, b;
friend void print(sample);
};
void main()
{
sample s;
clrscr();
print(s);

getch();
}

void print(sample s)
{
s.a=10;
s.b=20;
cout<<"Value of a is :"<<s.a;
cout<<"\nValue of b is :"<<s.b;
}