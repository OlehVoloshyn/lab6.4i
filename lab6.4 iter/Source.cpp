#include<iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#include<ctime>
using namespace std;

 void create(int* a, const int size)

{
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << endl;
}
 int product(int* a, const int size)
 {
	 int P = 1;
	 for (int i = 0; i < size; i++)
		 if (i % 2 == 0)
			 P *= a[i];
	 return P;
 }
 int Number_i(int* a, const int size)
 {
	 for (int i = 0; i < size; i++)
		 if (a[i] == 0)
			 return i;

	 return -1;
 }

 int Number_j(int* a, const int size)
 {
	 for(int i = size - 1; i >= 0; i--)
		 if (a[i] == 0)
			 return i;

	 return -1;
 }

 int Sum_zero(int* a, int i, int j)
 {
	 if ((i == -1) || (j == -1) || (i == j) || (j - i == 1))
		 return 0;

	 int s = 0;
	 for (int k = i; k < j; k++)
		 s += a[k];
	 return s;

 }

 void PlusMinus(int* a, const int size)
 {
	 int k = 100;
	 int* mas = new int[k];
	 int n = -1;

	 for (int i = 0; i < size; i++)
		 if (a[i] >= 0)
		 {
			 n++;
			 mas[n] = a[i];
		 }

	 for (int i = 0; i < size; i++)
		 if (a[i] < 0)
		 {
			 n++;
			 mas[n] = a[i];
		 }

	 for (int i = 0; i < size; i++)
		 a[i] = mas[i];

	 
	 
 }

 void Print(int* a, const int size)
 {
	 for (int i = 0; i < size; i++)
		 cout << setw(4) << a[i];
		 cout << endl;
 }

int main()
{
	int i, j;
	int size = 100;
	int* arr = new int[size];
	cout << "enter array size = ";
	cin >> size; cout << endl;
	create(arr, size);
	cout << "product = " << product(arr, size) << endl;
	

	i = Number_i(arr, size);
	j = Number_j(arr, size);
	cout << "suma = " << Sum_zero(arr, i, j) << endl;
	PlusMinus(arr, size);
	Print(arr, size);
	delete[]arr;
	return 0;
}