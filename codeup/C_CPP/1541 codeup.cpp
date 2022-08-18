#include <stdio.h>

int n;



void f(int num)
{
	if (num < 0)
		printf("negative");
	else if (num == 0)
		printf("zero");
	else
		printf("positive");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
