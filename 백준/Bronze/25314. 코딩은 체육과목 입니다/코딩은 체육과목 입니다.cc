#include <iostream>

using namespace std;

int main() {
	int n = 0;
	string s;

	cin >> n;

	for (int i = 0; i < n / 4; i++) 
		s += "long ";
	s += "int";

	std::cout << s;
}