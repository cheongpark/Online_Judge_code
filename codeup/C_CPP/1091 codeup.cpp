#include <iostream>
using namespace std;

int main()
{
	long long start = 0, multi = 0, plus = 0, num = 0;
	cin >> start >> multi >> plus >> num;
	for (int i = 0; i < num - 1; i++)
		start = start * multi + plus;
	cout << start;
}
