#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << (((a + 24) * 60 + b - 30) / 60) % 24 << " " << ((a + 24) * 60 + b - 30) % 60;
} 
