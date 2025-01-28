#include<stdio.h>
#include<ctype.h>
int s[100],top=-1;

int push(int x)
{
	s[++top]=x;
}
int pop()
{
	if(top==-1)
		printf("stack is Empty\n");
	else
			return(s[top--]);	
}
int main()
{
	char a[100];
	int i=0,n,p,q,res,r=1;
	printf("Enter your statement\n");
	scanf("%s",a);
	while(a[i]!='\0')
	{
		if(isdigit(a[i]))
		{
			n=a[i]-48;
			push(n);
		}
		else 
		{
			 p=pop();
			 q=pop();
			 switch(a[i])
			 {
			 case '+':res=q+p;
			 			  push(res);
			 			  break;
			 case '-':res=q-p;
			 			  push(res);
			 			  break;
			 case '*':res=q*p;
			 			  push(res);
			 			  break;
			 case '/':res=q/p;
			 			  push(res);
			 			  break;
			 case '^':while(p--)
			      	 		r*=q;
			 			  push(r);
			 			  break;
			 }
		  }
		  i++;
	}
	printf("Answer is = %d",pop());
}