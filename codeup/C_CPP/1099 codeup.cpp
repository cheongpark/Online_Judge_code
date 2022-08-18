#include <iostream>
using namespace std;

int main()
{
	int box[10][10] = {}, x = 1, y = 1;
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			cin >> box[j][i];
	for (int i = 0;i < 15; i++)
	{
		if (box[x][y] == 2)
			break;
		box[x][y] = 9;
		for (int j = 0; j < 8; j++)
		{
			if (box[x + 1][y] == 1 || box[x + 1][y] == 2)
				break;
			x++;
			box[x][y] = 9;
		}
		if (box[x + 1][y] == 1)
			y++;
		else if (box[x + 1][y] == 0 || box[x + 1][y] == 2)
			x++;
		if (box[x + 1][y] == 1 && box[x][y + 1] == 1)
			break;
	}
	box[x][y] = 9;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			cout << box[j][i] << " ";
		cout << endl;
	}
}
