// Tut7-Sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


template<class T>
void sort(T arr[], int arrS)
{
	T temp;
	for (int i = 0; i < arrS - 1; i++)
	{
		for (int j = i; j < arrS; j++)
		{
			if (arr[j] < arr[i])
			{
				temp = arr[j];								//bubblesort
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}


int _tmain(int argc, _TCHAR* argv[])
{
	int pie[5] = { 5, 3, 9, 7, 1 };							//array of integers
	sort(pie, 5);

	for (int i = 0; i < 5; i++)
	{
		cout << pie[i] << endl;
	}

	return 0;
}

