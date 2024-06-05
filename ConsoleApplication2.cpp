#include <iostream>
#include "library.h"

using namespace std;

int main()
{
	int gameindex;
	/*cout << "Welcome To Memory Game!" << endl;
	cout << "Which Difficult Do You Prefer?" << endl << "1. 4x4" << endl << "2. 6x6" << endl;*/
	cin >> gameindex;
	MemoryCreator(gameindex);
	char** arr = new char* [4]; // строки
	for (int i = 0; i < 4; i++)
	{
		arr[i] = new char[4]; // столбцы
	}
	HideCard(gameindex);
}
