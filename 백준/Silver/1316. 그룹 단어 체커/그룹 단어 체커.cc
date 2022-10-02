#include <iostream>
#include <string>

using namespace std;

int main() {
	int N = 0, count = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		string word = "";
		bool check[26] = { false, };
		cin >> word;

		check[(int)word[0] - 97] = true;

		if (word.length() == 1)
			count++;

		for (int j = 1; j < word.length(); j++) {
			if (word[j] != word[j - 1]) {
				if (check[(int)word[j] - 97])
					break;
				check[(int)word[j] - 97] = true;
			}

			if (j == word.length() - 1)
				count++;
		}
	}
	cout << count;
}