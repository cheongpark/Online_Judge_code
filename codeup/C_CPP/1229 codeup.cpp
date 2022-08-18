#include <iostream>
using namespace std;

int main()
{
	double a = 0, b = 0, num = 0, bimando = 0;
	cin >> a >> b;
	if (a < 150)
		num = a - 100;
	else if (a < 160)
		num = (a - 150) / 2 + 50;
	else
		num = (a - 100) * 0.9;
	bimando = (b - num) * 100 / num;
	if (bimando <= 10)
		cout << "정상";
	else if (bimando <= 20)
		cout << "과체중";
	else
		cout << "비만";
}
