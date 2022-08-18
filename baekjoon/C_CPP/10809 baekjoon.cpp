#include <iostream>
#include <string>

using namespace std;

int main() {
	string s = "";

	cin >> s;

	for (int i = 0; i < 26; i++) {
		if (s.find((char)(i + 97)) == string::npos) cout << -1 << " ";
		else cout << s.find((char)(i + 97)) << " ";
	}
}