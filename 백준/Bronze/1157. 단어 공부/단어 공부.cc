#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(int x, int y) {
	return x > y;
}

int main() {
	int n[26] = { 0, }, max = 0, index = 0;
	string word;

	cin >> word;

	for (int i = 0; i < word.length(); i++)
		n[(int)toupper(word[i]) - 65]++;

	max = *max_element(n, n + 26);
	index = find(n, n + 26, max) - n;
	
	sort(n, n + 26, cmp);

	cout << (n[0] == n[1] ? '?' : (char)(index + 65));
}