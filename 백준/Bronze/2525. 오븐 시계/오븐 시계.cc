#include <iostream>

using namespace std;

int main() {
	int ph = 0, pm = 0, nm = 0, m = 0;

	cin >> ph >> pm >> nm;

	m = ph * 60 + pm + nm;
	m %= 1440;

	cout << m / 60 << " " << m % 60;
}