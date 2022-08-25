#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> list;
	int data;

	for (int i = 0; i < 9; i++) {
		cin >> data;
		list.push_back(data);
	}

	cout << *max_element(list.begin(), list.end()) << " " << max_element(list.begin(), list.end()) - list.begin() + 1;
}
