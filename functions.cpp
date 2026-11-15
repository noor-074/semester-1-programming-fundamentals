#include <iostream>
using namespace std;

// 1. Calculate sum from 1 to N
int sumToN(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

// 2. Calculate the sum of individual digits
int digitSum(int n){
    int sum = 0;
    while(n > 0){
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}

// 3. Reverse the digits of a number
int reverse(int n){
    int reverse = 0;
    while(n > 0){
        int remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    return reverse;
}

// 4. Count the total number of digits
int countDigits(int n){
    int count = 0;
    while(n > 0){
        n /= 10;
        count++;
    }
    return count;
}

// Exit message function
void print(int n){ 
    cout << "GOOD BYE! "; 
}

// Invalid choice message function
void prnt(int n){ 
    cout << "Invalid choices."; 
}

int main() {
    int n, N;
    do {
        cout << "1) Sum 1 to N  2) Digit Sum  3) Reverse  4) Count Digits  5) Exit" << endl;
        cout << "Enter a choice: ";
        cin >> n;
        
        switch(n) {
            case 1: 
                cout << "Enter N: ";
                cin >> N;
                cout << "Sum upto N: " << sumToN(N); 
                break;
            case 2: 
                cout << "Enter a number: ";
                cin >> N;
                cout << "Digit Sum: " << digitSum(N); 
                break;
            case 3: 
                cout << "Enter a number: ";
                cin >> N;
                cout << "Reversed Number: " << reverse(N); 
                break;
            case 4: 
                cout << "Enter a number: ";
                cin >> N;
                cout << "Digit Count: " << countDigits(N); 
                break;
            case 5: 
                print(n); 
                break;
            default: 
                prnt(n);
        } 
        cout << endl;
    } while(n != 5);
    
    return 0;
}