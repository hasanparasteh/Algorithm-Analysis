#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    int n, a[100];
    cout << "Enter number of elements\n";
    cin >> n;
    printf("Enter %d integers\n", n);

    for (int c = 0; c < n; c++)
        cin >> a[c];
    cout << endl;

    for (int i = 1; i < n; i++) //caculate
    {
        int j;
        int key = a[i];

        for (j = i - 1; j >= 0; j--)
        {
            if (key < a[j])
            {
                a[j + 1] = a[j];
            }
            else
                break;
        }
        a[j + 1] = key;
    }

    for (int i = 0; i < n; i++) //Print
    {
        cout << a[i] << " ";
    }

    getch();
    return 0;
}
