#include <iostream>
using namespace std;

int main()
{
	long long a;
	cin >> a;
	if(a > 0)
		cout << "plus" << endl;
	else
		cout << "minus" << endl;
	if((a % 2) == 0)
		cout << "even";
	else
		cout << "odd";
}
