#include <iostream>
using namespace std;

int main()
{
	int s = 0;
	cin >> s;
	cout << (s / 60) / 60 << " " << (s / 60) % 60 << " " << s % 60;
}
