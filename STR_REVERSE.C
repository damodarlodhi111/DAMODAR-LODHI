#include <stdio.h>
void main()
{
	int c=0,i;
	char s[10];
	printf("Enter a string \n");
	scanf("%s", &s);


	for (i = 0; s[i] != '\0'; i++)
	 c++;
	printf("reverse string: ");
	for(i=c-1;i>=0;i--)
	printf("%c",s[i]);
}
