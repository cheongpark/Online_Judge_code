#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int student = 0;
	vector<int> students;

	for (int i = 0; i < 30; i++)
		students.push_back(i + 1);

	for (int i = 0; i < 28; i++) {
		cin >> student;
		students.erase(students.begin() + distance(students.begin(), find(students.begin(), students.end(), student)));
	}

	for (int s : students)
		cout << s << endl;
}