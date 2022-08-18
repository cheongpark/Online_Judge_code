#include <iostream>
using namespace std;

int main()
{
	int a[3] = { 0, }, num = 0;
	cin >> a[0] >> a[1] >> a[2];
	num = a[0] + a[1] + a[2];
	num = num % 1000;
	num = num / 100;
	if ((num % 2) == 0)
		cout << "대박";
	else
		cout << "그럭저럭";
}	
