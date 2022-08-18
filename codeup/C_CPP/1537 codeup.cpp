#include <stdio.h>

int n;



void f(int num)
{
	if (num == 1)
		printf("hello");
	else
		printf("world");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
