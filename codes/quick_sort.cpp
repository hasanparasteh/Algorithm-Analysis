#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

//partition function
int partition(int A[], int p, int q)
{
	int temp;
	int x = A[p];
	int i = p;
	for (int j = p + 1; j <= q; j++)
	{
		if (A[j] <= x)
		{
			i++;
			temp = A[j];
			A[j] = A[i];
			A[i] = temp;
		}
	}
	temp = A[i];
	A[i] = A[p];
	A[p] = temp;
	return i;
}

//quick sort
void Quick_sort(int A[], int p, int r)
{
	int q;
	if (p < r)
	{
		q = partition(A, p, r);
		Quick_sort(A, p, q - 1);
		Quick_sort(A, q + 1, r);
	}
}

int main()
{
	int i, n;
	int A[100];
	cout << "how many numbers do you want to sort ?";
	cin >> n;
	printf("Enter %d integers\n", n);
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	Quick_sort(A, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	getch();
	return 0;
}
