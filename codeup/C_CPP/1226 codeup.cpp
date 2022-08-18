#include <iostream>
using namespace std;

int main()
{
	int num = 0, bonus = 0, a[7] = {}, b[6] = {};
	for (int i = 0; i < 7; i++)
		cin >> a[i];
	for (int i = 0; i < 6; i++)
		cin >> b[i];

	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
			if (b[i] == a[j])
				num++;
	for (int i = 0; i < 6; i++)
		if (a[6] == b[i])
			bonus++;

	if (num == 6)
		cout << "1";
	else if (num == 5 && bonus == 1)
		cout << "2";
	else
	{
		switch (num)
		{
		case 5:
			cout << "3";
			break;
		case 4:
			cout << "4";
			break;
		case 3:
			cout << "5";
			break;
		default: 
			cout << "0";
			break;
		}
	}
}
