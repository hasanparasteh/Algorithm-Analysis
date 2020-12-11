#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
  int array[100], n, c, d, swap;

  cout << "Enter number of elements\n";
  cin >> n;
  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++) // input numbers
    cin >> array[c];

  for (c = 0; c < (n - 1); c++) // calculate
  {
    for (d = 0; d < n - c - 1; d++)
    {
      if (array[d] > array[d + 1])
      {
        swap = array[d];
        array[d] = array[d + 1];
        array[d + 1] = swap;
      }
    }
  }

  cout << "Sorted list in ascending order:\n";

  for (c = 0; c < n; c++) // print
    cout << " " << array[c];
  getch();
  return 0;
}
