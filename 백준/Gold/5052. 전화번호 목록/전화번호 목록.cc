#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
	
	sort(phone_book.begin(), phone_book.end());

	for (int i = 0; i < phone_book.size(); i++) {
		if (phone_book.size() - 1 == i) break;
		if (phone_book[i + 1].find(phone_book[i]) == 0) {
			answer = false;
			break;
		}
	}

    return answer;
}

int main() {
	int t = 0, n = 0;
	string phone;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
		vector<string> phonelist;
		for (int j = 0; j < n; j++) {
			cin >> phone;
			phonelist.push_back(phone);
		}
		cout << (solution(phonelist) ? "YES" : "NO") << endl;
	}
}