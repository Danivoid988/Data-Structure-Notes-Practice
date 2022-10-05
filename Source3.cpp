#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void input(int **chess, int r, int c)
{
	for (int row = 0; row < r; row++) 
	{
		for (int col = 0; col < c; col++)
		{
			cin >> chess[row][col];
		}
	}
}
	void print1(int **chess, int r, int c)
	{
		for (int row = 0; row < r; row++)
		{
			for (int col = 0; col < c; col++)
			{
				cout << chess[row][col];
			}
		}
	}
	int * input1(int arr[], int size)
	{
		arr[4] = 8;
		return arr;
	}

void main()
{
	int **chess;
	int r = 1, c = 1;
	chess = new int*[r];
	
	for (int x = 0; x < r; x++)
	{
		chess[x] = new int[c];
	}
	input(chess, r, c);
	print1(chess, r, c);
	cout << "---------3-----------" << endl;
	int arr[5] = { 1, 2, 3, 4, 5 };
	int *ptr = NULL;
	ptr = input1(arr, 5);
	for (int x = 0; x < 5; x++)
	{
		cout << *(ptr + x);
	}
	system("pause");
}