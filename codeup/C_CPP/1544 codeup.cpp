#include <stdio.h>

int n;



void f(int num)
{
	for (int i = 0; i < num; i++)
		printf("*");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
