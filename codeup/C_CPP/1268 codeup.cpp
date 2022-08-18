#include <stdio.h>

int main()
{
	int a,n,b=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a);
		if (!(a % 2))
		{
			b++;
		}
	}
	printf("%d", b);
}
