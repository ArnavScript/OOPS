#include <iostream>
#include <stdexcept>
using namespace std;

// Example 1: Basic try-catch
void divide(int a, int b) {
    try {
        if (b == 0)
            throw runtime_error("Division by zero!");
        cout << "Result: " << a / b << endl;
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }
}

// Example 2: Exception handling in classes (OOP)
class BankAccount {
    double balance;
public:
    BankAccount(double bal) : balance(bal) {}
    void withdraw(double amount) {
        if (amount > balance)
            throw out_of_range("Insufficient funds!");
        balance -= amount;
        cout << "Withdrawn: " << amount << ", New Balance: " << balance << endl;
    }
};

int main() {
    // Example 1
    divide(10, 2);
    divide(10, 0);

    // Example 2
    BankAccount acc(1000);
    try {
        acc.withdraw(500);
        acc.withdraw(600); // Will throw exception
    } catch (const out_of_range& e) {
        cout << "Bank Error: " << e.what() << endl;
    }

    // Example 3: Catch all exceptions
    try {
        throw "Unknown exception!";
    } catch (...) {
        cout << "Caught an unknown exception." << endl;
    }

    return 0;
}