#include <iostream>
using namespace std;

int main()
{
	char a[90] = {};
	int n[123] = {};
	cin.getline(a, 90);
	for (int i = 0; i < 90; i++)
		n[(int)a[i]]++;
	for (int i = 0; i < 26; i++)
		printf("%c:%d\n", i + 97, n[i + 97]);
}
