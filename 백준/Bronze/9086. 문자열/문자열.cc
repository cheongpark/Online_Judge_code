#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0;
	string s;
	
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> s;
		if (s.length() == 1) cout << s + s;
		else cout << s[0] << s[s.length() - 1];
		cout << "\n";
	}
}