#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

void counting_sort(int A[], int n)
{
	int i;
	int Max = A[0];
	int *B;
	int *C;
	//found Max number in array
	for (i = 1; i < n; i++)
	{
		if (Max < A[i])
		{
			Max = A[i];
		}
	}
	//Define array that lenght is Max
	B = new int[Max + 1];
	//set 0 all array
	for (i = 0; i <= Max; i++)
	{
		B[i] = 0;
	}
	//
	for (i = 0; i < n; i++)
	{
		B[A[i]]++;
	}
	//
	for (i = 1; i <= Max; i++)
	{
		B[i] = B[i] + B[i - 1];
	}
	//make new array for insert sorted number in it
	C = new int[n];
	//
	for (i = n - 1; i >= 0; i--)
	{
		C[B[A[i]] - 1] = A[i];
		B[A[i]]--;
	}
	//put C in A and delet C from memory
	for (i = 0; i < n; i++)
	{
		A[i] = C[i];
	}
}

int main()
{
	int i, n, c;
	int A[100];
	cout << "Enter number of elements\n";
	cin >> n;
	printf("Enter %d integers\n", n);
	for (c = 0; c < n; c++)
		cin >> A[c];

	counting_sort(A, n);

	//Print A after sort
	for (i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	getch();
	return 0;
}
