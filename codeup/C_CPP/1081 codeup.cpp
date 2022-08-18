#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0; 
	cin >> a >> b;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
			cout << i << " " << j << endl;
	}
}
