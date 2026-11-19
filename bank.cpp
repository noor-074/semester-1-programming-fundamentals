#include <iostream>
using namespace std;

void showMenu() {
    cout << "--- Simple Bank Menu ---" << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Check Balance" << endl;
    cout << "4. Exit" << endl;
    cout << "------------------------" << endl;
    cout << "Enter choice: ";
}

void deposit(double &balance, double amount) {
    if (amount <= 0) {
        cout << "Invalid amount! Deposit must be greater than 0." << endl;
        return;
    }
    balance += amount;
    cout << "Deposited $" << amount << " successfully." << endl;
    cout << "New balance: $" << balance << endl;
}

void withdraw(double &balance, double amount) {
    if (amount <= 0) {
        cout << "Invalid amount! Withdrawal must be greater than 0." << endl;
        return;
    }
    if (amount > balance) {
        cout << "Invalid transaction! Insufficient balance." << endl;
        return;
    }
    balance -= amount;
    cout << "Withdrew $" << amount << " successfully." << endl;
    cout << "Remaining balance: $" << balance << endl;
}

void checkBalance(double balance) {
    cout << "Current balance: $" << balance << endl;
}

int main() {
    double balance = 1000.0;
    int choice;
    double amount;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                deposit(balance, amount);
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                withdraw(balance, amount);
                break;

            case 3:
                checkBalance(balance);
                break;

            case 4:
                cout << "Thank you for banking with us. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please select an option from 1 to 4." << endl;
                break;
        }
        cout << endl; 
    } while (choice != 4);

    return 0;
}