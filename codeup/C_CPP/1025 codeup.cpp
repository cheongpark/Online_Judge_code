#include <stdio.h>

int main()
{
	int a[5], b = 100000;
	for (int i = 0; i < 5; i++)
		scanf("%1d", &a[i]);
	for (int k = 0; k < 5; k++)
		printf("[%d]\n", a[k] * (b /= 10));
}
