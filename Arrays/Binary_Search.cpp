#include <iostream>
using namespace std;
int main() {
    int a[] = {12, 24, 56, 89, 90};
    int n = sizeof(a) / sizeof(a[0]);
    int key = 56;
    bool found = false;

    int low = 0, high = n - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            cout << "Element found at index " << mid << endl;
            found = true;
            break;
        }
        else if (a[mid] < key) {  
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (!found) {  
        cout << "Element not found" << endl;
    }

    return 0;
}


