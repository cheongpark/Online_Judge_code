#include <stdio.h>

int n;



void f(int num)
{
	if (num % 2 == 1)
		printf("odd");
	else
		printf("even");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
