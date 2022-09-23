#include<stdio.h>
void main()
{
	int a[10], n, i, j, t, q, p = 0;
	printf("Enter number n :");
	scanf("%d", &n);
	printf("Enter %d numbers\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (j = 0; j < (n - 1); j++)
	{
		q = 0;
		for (i = 0; i < (n - 1 - j); i++)
		{
			if (a[i] > a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
				q++;
			}
		}
		p++;
		if (q == 0)
		{
			break;
		}
	}
	printf("no.of passes %d\n", p);
	printf("shorted array [");
	for (i = 0; i < n; i++)
	{
		printf(" %d", a[i]);
	}
	printf(" ]");
}