#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  int arr[100], n, c, d, swap;
  cout << "Enter number of elements\n";
  cin >> n;
  printf("Enter %d integers\n", n);

  for (d = 0; d < n; d++)
    cin >> arr[d];

  int i, j, max, temp; // caculate
  for (i = n - 1; i > 0; i--)
  {
    max = 0;
    for (j = 1; j <= i; j++)
    {
      if (arr[max] < arr[j])
      {
        max = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[max];
    arr[max] = temp;
  }

  cout << "Sorted list in ascending order:\n";
  for (c = 0; c < n; c++) // Print
    cout << " " << arr[c];

  getch();
  return 0;
}
