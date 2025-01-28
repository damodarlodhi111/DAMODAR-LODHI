#include<stdio.h>
#include<conio.h>
int a[100];    
int ins(int n)
{
    int ele,ind;
    printf("Enter Element or index no. :");
    scanf("%d%d",&ele,&ind);
    for(int i=n;i>ind;i--)
    a[i]=a[i-1];
    a[ind]=ele;
}

int del(int n)
{
  int ind;
    printf("Enter index no. :");
    scanf("%d",&ind);
    for(int i=ind;i<n;i++)
    a[i]=a[i+1];
}

int mer(int n,int m)
{
  int i,j; 
  printf("Enter the 2nd array ele.\n");
  for(i=0;i<m;i++)
    scanf("%d",&a[n+i]);
}

void sear(int n)
{
  int s,c=0;
  printf("Enter the ele you found :");
  scanf("%d",&s);
  for(int i=0;i<n;i++)
  if(s==a[i])
  c=printf("%d found at index %d\n",s,i);
  if(c==0)
  printf("Element not found\n");
}

void sort(int n)
{
  for(int j=1;j<n;j++)
    for(int i=1;i<n+1-j;i++)
      if(a[i-1]>a[i])
      {
        a[i-1]-=a[i];
        a[i]+=a[i-1];
        a[i-1]=a[i]-a[i-1];
      }
}

void dis(int n)
{
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
} 


int main()
{
  int d,n,m;
  char cont;
  printf("Enter the size of array :");
  scanf("%d",&n);
  printf("enter array element\n");
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]); 
  l1:
  printf("\n1.Insertion\n2.Deletion\n3.Merging\n4.searching\n5.Sorting\n  :");
    scanf("%d",&d);

  switch(d)
  {
    case 1: ins(n);
            n++;
            dis(n);
            break;
    case 2: del(n);
            n--;
            dis(n);
            break;
    case 3: printf("Enter the size of second array : ");
            scanf("%d",&m);
            mer(n,m);
            dis(m+n);
            n+=m;
            break;
    case 4: sear(n);
            break;
    case 5: sort(n);
            dis(n);
            break;
  }	
	printf("if you want to continue enter y\n");
	scanf("%c",&cont);
	cont=getch();
	if(cont=='y')
	goto l1;
	
}      