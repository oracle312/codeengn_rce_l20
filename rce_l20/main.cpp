#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	string data = "CodeEngn";
	int val = 0;

	for (auto i = 0, j = 0x41; i < data.size(); i++, j++)
	{
		if (j == 0x4F)
			break;

		printf("[%c]%#x ",data[i], data[i] ^ j);
	}
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
}


