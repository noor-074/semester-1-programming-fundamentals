#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

void showMenu() {
    cout << "\n--- Simple Calculator ---\n";
    cout << " + : Addition\n";
    cout << " - : Subtraction\n";
    cout << " * : Multiplication\n";
    cout << " / : Division\n";
    cout << "-------------------------\n";
}

int main() {
    double num1, num2;
    char op;
    char again;

    do {
        showMenu();
        cout << "Enter expression (e.g., 12 + 5): ";
        cin >> num1 >> op >> num2;

        switch (op) {
            case '+':
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case '-':
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case '*':
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case '/':
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed." << endl;
                } else {
                    cout << "Result: " << divide(num1, num2) << endl;
                }
                break;
            default:
                cout << "Error: Invalid operator '" << op << "'." << endl;
                break;
        }

        cout << "Do you want to calculate again? (y/n): ";
        cin >> again;
    } while (again == 'y' || again == 'Y');

    cout << "Goodbye!" << endl;
    return 0;
}