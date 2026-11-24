#include <iostream>
using namespace std;

int search(const int a[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (a[i] == key)
            return i;
    }
    return -1;
}

int main() {
    const int size = 8;
    int roll[size] = { 101, 105, 110, 112, 118, 121, 125, 130 };
    int key;
    cout << "Enter roll number: ";
    cin >> key;
    int index = search(roll, size, key);
    if (index != -1) {
        cout << key << " found at index " << index << " (position " << index + 1 << ")" << endl;
    } else {
        cout << key << " is not in the list" << endl;
    }
    return 0;
}