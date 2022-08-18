#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	x = x % 2;
	if (x == 1)
	{
		printf("odd");
	}
	else
	{
		printf("even");
	}
}
