#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
	int n = 0, num = 0;
	queue<int> q;
	string c;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> c;
		if (c == "push") {
			cin >> num;
			q.push(num);
		}
		if (c == "pop") {
			if (q.empty())
				cout << -1 << endl;
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		if (c == "size")
			cout << q.size() << endl;
		if (c == "empty")
			cout << q.empty() << endl;
		if (c == "front") {
			if (q.empty())
				cout << -1 << endl;
			else cout << q.front() << endl;
		}
		if (c == "back") {
			if (q.empty())
				cout << -1 << endl;
			else cout << q.back() << endl;
		}
	}
}