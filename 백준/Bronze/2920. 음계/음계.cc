#include <iostream>

using namespace std;

int main()
{
	bool asc = true, des = true;
	int X = 0;

	for (int i = 1; i <= 8; i++) {
		cin >> X;
		if (X != i)
			asc = false;
		if (X != (9 - i))
			des = false;
	}

	cout << (asc == true ? "ascending" : (des == true ? "descending" : "mixed"));
}