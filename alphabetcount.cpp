#include <iostream>
using namespace std;

int vowelcount(char array[], int size) {
    int count = 0;
    for (int i = 0; array[i] != '\0'; i++) {
        if (array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u' ||
            array[i] == 'A' || array[i] == 'E' || array[i] == 'I' || array[i] == 'O' || array[i] == 'U') {
            count++;
        }
    }
    return count;
}

int consonantcount(char array[], int size) {
    int count = 0;
    for (int i = 0; array[i] != '\0'; i++) {
        if ((array[i] >= 'a' && array[i] <= 'z') || (array[i] >= 'A' && array[i] <= 'Z')) {
            if (array[i] != 'a' && array[i] != 'e' && array[i] != 'i' && array[i] != 'o' && array[i] != 'u' &&
                array[i] != 'A' && array[i] != 'E' && array[i] != 'I' && array[i] != 'O' && array[i] != 'U') {
                count++;
            }
        }
    }
    return count;
}

int main() {
    const int size = 100;
    char array[size];

    cout << "Enter text: ";
    cin.getline(array, size);

    cout << "Total vowels: " << vowelcount(array, size) << endl;
    cout << "Total consonants: " << consonantcount(array, size) << endl;

    return 0;
}