#include <stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d %d", &a, &b);
	if (a >= b)
	{
		c = b;
		d = a;
	}
	else
	{
		c = a;
		d = b;
	}

	for (int i = c; i <= d; i++)
	{
		printf("%d ", c);
		c++;
	}
}

