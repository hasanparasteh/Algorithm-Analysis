#include <iostream>
#include <vector>
#include <stdio.h>
#include <conio.h>

using namespace std;

void max_heapify(int *arr, int n, int i)
{
	int left_child = 2 * i + 1;
	int right_child = 2 * i + 2;
	int large = i;

	if (left_child < n && arr[large] < arr[left_child])
	{
		large = left_child;
	}
	if (right_child < n && arr[large] < arr[right_child])
	{
		large = right_child;
	}
	if (large != i)
	{
		int temp;
		temp = arr[i];
		arr[i] = arr[large];
		arr[large] = temp;
		max_heapify(arr, n, large);
	}
}

void make_max_heap(int *arr, int n)
{
	for (int i = n / 2 + 1; i >= 0; i--)
	{
		max_heapify(arr, n, i);
	}
}
//Heap Sort
void heap_sort(int *arr, int n)
{
	make_max_heap(arr, n);

	int temp;
	for (int i = n - 1; i > 0; i--)
	{
		temp = arr[0];
		arr[0] = arr[i];
		arr[i] = temp;
		max_heapify(arr, i, 0);
	}
}

int main()
{
	int a[100], c, n;
	cout << "Enter number of elements\n";
	cin >> n;
	printf("Enter %d integers\n", n);

	for (c = 0; c < n; c++)
		cin >> a[c];
	heap_sort(a, n);
	cout << "Sorted list in ascending order:\n";
	for (int i = 0; i < n; i++) // Print
	{
		cout << a[i] << " ";
	}
	cout << endl;
	getch();
	return 0;
}
