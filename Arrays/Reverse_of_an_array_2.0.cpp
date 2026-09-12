// Reverse of an array
#include <iostream>
using namespace std;

int main()
{
    int size, start, end, temp;
    cout << "Size of array: ";
    cin >> size;

    int a[size];
    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++)
        cin >> a[i];

    start = 0;
    end = size - 1;

    // Reverse the array
    while (start < end)
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }

    cout << "The reversed array is: ";
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";

    return 0;
}
