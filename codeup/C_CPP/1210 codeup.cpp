#include <iostream>
using namespace std;

int main()
{
	int a[5] = { 400,340,170,100,70 }, n[2] = {};
	cin >> n[0] >> n[1];
	if (a[n[0] - 1] + a[n[1] - 1] <= 500)
		cout << "no angry";
	else
		cout << "angry";
}
