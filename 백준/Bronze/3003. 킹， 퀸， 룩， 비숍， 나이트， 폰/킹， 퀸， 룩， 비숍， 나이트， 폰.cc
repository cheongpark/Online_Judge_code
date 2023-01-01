#include <iostream>

using namespace std;

int main() {
	int original[6] = { 1, 1, 2, 2, 2, 8 };
	int now[6] = { 0, };

	for (int i = 0; i < 6; i++)
		cin >> now[i];

	for (int i = 0; i < 6; i++)
		cout << original[i] - now[i] << " ";
}