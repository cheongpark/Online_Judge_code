#include <iostream>
#include <string>

using namespace std;

int main() {
	string S = "";
	int a[26] = { 0 };

	cin >> S;
	
	for (int i : S) 
		a[i - 97]++;

	for (int i : a)
		cout << i << " ";
}