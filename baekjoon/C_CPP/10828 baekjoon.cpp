#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int n = 0, num = 0;
	stack<int> s;
	string c;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> c;
		if (c == "push") {
			cin >> num;
			s.push(num);
		}
		if (c == "pop") {
			if (s.empty())
				cout << -1 << endl;
			else {
				cout << s.top() << endl;
				s.pop();
			}
		}
		if (c == "size")
			cout << s.size() << endl;
		if (c == "empty")
			cout << s.empty() << endl;
		if (c == "top")
			cout << (s.empty() ? -1 : s.top()) << endl;
	}
}