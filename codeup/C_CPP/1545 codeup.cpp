#include <stdio.h>

int n;



int zero(int num)
{
	return num == 0;
}
int main()
{
  scanf("%d", &n);
  if(zero(n)) printf("zero");
  else printf("non zero");
  return 0;
}
