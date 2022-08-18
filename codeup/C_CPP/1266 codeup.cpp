#include <stdio.h>

int main()
{
	int a,n,b=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a);
		b = b + a;
	}
	printf("%d", b);
}
