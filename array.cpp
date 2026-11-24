#include <iostream>
using namespace std;
void printArray(int n[], int size){
    for(int i=0 ; i<size ; i++)
        cout << n[i] << " ";
}
void reverseArray(int n[], int size){
    int temp;
    for(int i=0 ; i<size/2 ; i++){
        temp=n[i];
        n[i]=n[size-1-i];
        n[size-i-1]=temp;
    }
}
int main() {
    const int size=7;
    int a[size] = { 3, 9, 1, 7, 4, 8, 2 };
    cout << "Before: ";
    printArray(a, size);
    cout << endl;
    reverseArray(a, size);
    cout << "After : " ;
    printArray(a, size);
    return 0;
}