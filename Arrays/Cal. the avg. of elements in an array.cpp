#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Size of array: ";
    cin >> size;

    int a[size];

    cout << "Enter the elements of the array: ";

    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }

    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum = sum + a[i];
    }

    float average = (float)sum / size;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
