#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	stack<int> bracket;
	int cnt = 0, result = 0;

	cin >> str;

	if (str.size() == 1) {
		cout << 0;
		return 0;
	}

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(' && str[i + 1] == ')') {
			bracket.push(2);
			i++;
		}
		else if (str[i] == '[' && str[i + 1] == ']') {
			bracket.push(3);
			i++;
		}
		else if (str[i] == ')') {
			cnt = 0;

			while (!bracket.empty() && bracket.top() != -1) {
				cnt += bracket.top();
				bracket.pop();
			}

			if (bracket.empty()) {
				result = 0;
				break;
			}

			bracket.pop();
			bracket.push(cnt * 2);

		}
		else if (str[i] == ']') {
			cnt = 0;

			while (!bracket.empty() && bracket.top() != -2) {
				cnt += bracket.top();
				bracket.pop();
			}

			if (bracket.empty()) {
				result = 0;
				break;
			}

			bracket.pop();
			bracket.push(cnt * 3);

		}
		else if (str[i] == '(')
			bracket.push(-1);
		else
			bracket.push(-2);
	}

	while (!bracket.empty()) {
		if (bracket.top() < 0) {
			result = 0;
			break;
		}
		result += bracket.top();
		bracket.pop();
	}

	cout << result;
}