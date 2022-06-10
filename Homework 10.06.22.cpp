#include <iostream>
#include <windows.h> // библиотека для окрашивания
using namespace std;

int main()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	system("color 07");

	int width = 21;
	int height = 13;

	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			if (x < width / 2 && y < (height / 2) + 1)
			{
				SetConsoleTextAttribute(h, 1);
			}
			else if (y % 2 == 0)
			{
				SetConsoleTextAttribute(h, 4);
			}
			else
			{
				SetConsoleTextAttribute(h, 15);
			}

			if (x < width / 2 && y < (height / 2) + 1 && x % 2 == 0 && y % 2 == 0)
			{
				SetConsoleTextAttribute(h, 1);
				cout << (char)178;
				SetConsoleTextAttribute(h, 15);
				cout << "*";
			}
			else
			{
				cout << (char)178 << char(178);
			}
		}
		cout << "\n";
	}



	Sleep(INFINITE);
}