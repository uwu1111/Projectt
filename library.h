#pragma once
#include <stdlib.h>
#include <windows.h>
#include <iostream>

using namespace std;

char symbols[18]{'!','%','?','\\','/','+','*','$','@','#','&',')','<','>',':',';','-','_'};
char** arr; // строки
bool** arr1;

void PrintArr(int index)
{
	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < index; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void SwapSing(char& index, char& indextochange)
{
	char buffer_index = index;
	index = indextochange;
	indextochange = buffer_index;
}

void MemoryCreator(int index)
{
	if (index % 2 == 0)
	{
		int counter = 0;
		srand(time(0));
		arr = new char* [index];
		for (int i = 0; i < index; i++)
		{
			arr[i] = new char[index]; // столбцы
		}
		for (int i = 0; i < index; i++)
		{
			for (int j = 0; j < index - 1; j+=2)
			{
				int random = rand() % 10;
				arr[i][j] = symbols[counter];
				arr[i][j + 1] = symbols[counter];
				counter++;
				//cout << arr[i][j] << " ";
			}
			//cout << endl;
		};
		int card1row, card1col;
		int card2row, card2col;
		for (int i = 0; i < 100; i++)
		{
			card1col = rand() % 4;
			card1row = rand() % 4;
			card2col = rand() % 4;
			card2row = rand() % 4;
			int rand_num = rand() % 2;
			system("cls");
			SwapSing(arr[card1row][card1col], arr[card2row][card2col]);
			PrintArr(index);

		}
	}
	else
	{
		cout << "Error! Number Cant Be Divined By 2!";
	}
}
void UpCard(int index)
{
	system("cls");
	for (int i = 0;i < index;i++)
	{
		for (int j = 0; j < index; j++)
		{
			if (arr[i][j] = false)
			{
				cout << "0";
			}
			else if (arr[i][j] = true)
			{
				cout << arr[i][j];
			}
		}
		cout << endl;
	}
}
void HideCard(int index)
{
	arr1 = new bool* [index];
	for (int i = 0; i < 4; i++)
	{
		arr1[i] = new bool[index]; // столбцы
	}
	for (int i = 0; i < index;i++)
	{
		for (int j = 0;j < index;j++)
		{
			arr1[i][j] = false;
		}
	}
	UpCard(index);
}