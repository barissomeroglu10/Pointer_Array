/*
In this code we learn some basic information about pointer-array usage.

Developer = Barış Someroğlu
Date = 05.05.2024 - 06:10 pm
*/

#include <iostream>

using namespace std;

int main()
{
	int arr[] = { 34,47,85 };

	int* ptrArr;

	ptrArr = arr;

	cout << "Same memory address for arr and ptrArr: " << endl;
	cout << ptrArr << endl;
	cout << arr << endl;

	cout << endl << "Pointer firstly shows value for first memory address of array: " << endl;
	cout << *ptrArr << endl;

	cout << endl << "We write array with *(ptrArr+1) etc. " << endl;
	cout << *ptrArr << endl;
	cout << *(ptrArr + 1) << endl;
	cout << *(ptrArr + 2) << endl;

	cout << endl << "We can write array with ptrArr[]: " << endl;
	cout << ptrArr[0] << endl;
	cout << ptrArr[1] << endl;
	cout << ptrArr[2] << endl;

	cout << endl << "-------------------------------------New Example-----------------------------------------" << endl << endl;

	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* ptrArray;

	ptrArray = array;
	
	cout << "Array's element via for loop : ";
	for (int i = 0; i < 10; i++)
	{
		cout << *(ptrArray + i) << " ";
	}

	cout << "\n\nArray element's address via for loop : \n";
	for (int i = 0; i < 10; i++)
	{
		cout << (ptrArray + i) << "\n";
	}

	cout << endl << endl;


	return 0;
}