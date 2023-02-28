#include <iostream>
#include <string>

using namespace std;

int main() {
	int num = 0, charnum = 0, result = 0;
	
	string str;
	cin >> str;

	for (char c : str) {
		num = (int)c - 65;

		if (num >= 15) {
			if (num >= 15 && num <= 18)
				charnum = 8;
			else if (num >= 19 && num <= 21)
				charnum = 9;
			else if (num >= 22 && num <= 26)
				charnum = 10;
		}
		else charnum = num / 3 + 3;
		
		result += charnum;
	}
	cout << result;
}