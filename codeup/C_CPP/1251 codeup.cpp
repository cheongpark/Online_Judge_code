#include <stdio.h>
using namespace std;

int main()
{
	int a = 1, b = 100;
	printf("%d ", a);
	for (int i = 1; i < b; i++)
	{
		a++;
		printf("%d ", a);
	}
}


