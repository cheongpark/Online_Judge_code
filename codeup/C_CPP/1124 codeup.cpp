#include <stdio.h>

int main()
{
	int a[4];
	scanf("%c%d%c%d", &a[0], &a[1], &a[2], &a[3]);
	printf("%d", a[1] * 12 + a[3] * 1);
}
