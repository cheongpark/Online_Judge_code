#include <iostream>
using namespace std;

int main()
{
	int xs = 0, ys = 0, y[3] = {};
	cin >> xs >> ys;
	for (int i = 0; ys; i++)
	{
		y[i] = ys % 10;
		ys /= 10;
	}
	cout << xs * y[0] << endl << xs * y[1] << endl << xs * y[2] << endl << xs * ((y[2] * 100) + (y[1] * 10) + (y[0]));
}
