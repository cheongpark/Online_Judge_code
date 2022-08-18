#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, n[100][100] = {};
	cin >> a >> b;
	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
			cin >> n[i][j];
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
			cout << n[i][j] << " ";
		cout << endl;
	}
}
