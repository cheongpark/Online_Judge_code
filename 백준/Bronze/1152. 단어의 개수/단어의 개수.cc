#include <iostream>
#include <string>

using namespace std;

int main()
{
	string X = "";
	int cnt = 0;

	while (!cin.eof()) {
		cin >> X;
		cnt++;
	}

	cout << cnt - 1;
}