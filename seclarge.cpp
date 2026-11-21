#include <iostream>
#include <climits>
using namespace std;

int seclarge(int a[], int size) 
{
    int hi = a[0]; 
    int sec = INT_MIN;
    for(int i = 1; i < size; i++)
    {
        if(a[i] > hi)
            hi = a[i];
    }
    for(int i = 0; i < size; i++)
    {
        if(a[i] > sec && a[i] < hi)
        {
            sec = a[i];
        }
    }
    if(sec == INT_MIN)
        return -1; // No second distinct number
    return sec;
}

int main()
{
    const int size = 10; // Define the size of the array
    int arr[size];

    cout << "Enter " << size << " numbers:\n";
    // Input the numbers into the array
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i]; // Read each number from the user
    }

    cout << "Second largest: " << seclarge(arr, size); 

    return 0;
}
