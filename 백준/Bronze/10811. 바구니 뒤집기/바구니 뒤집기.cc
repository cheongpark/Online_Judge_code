#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n = 0, m = 0, p1 = 0, p2 = 0;
	vector<int> boxs;
	
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		boxs.push_back(i + 1);

	for (int i = 0; i < m; i++) {
		cin >> p1 >> p2;
		reverse(boxs.begin() + (p1 - 1), boxs.end() - (n - p2));
	}
	

	for (int num : boxs)
		cout << num << " ";
}