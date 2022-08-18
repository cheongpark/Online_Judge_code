#include <stdio.h>

int main() 
{
	int a,b,c,d,n;
	scanf("%d %d %d",&a,&b,&c);
	d=b%2;
	if(d==0)
	{
		for(int i=0;i<2;i++)
		{
			printf("%d%d%d ",a,b,c);
		}

	}
	else
	{
		printf("%d%d%d",a,b,c);
	}
}  
