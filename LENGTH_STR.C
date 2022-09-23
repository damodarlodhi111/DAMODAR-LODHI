#include <stdio.h>
void main()
{
	char s[50];
	int i;
	printf("Enter a string \n");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++);
	printf("Length of the string: %d", i);
}
