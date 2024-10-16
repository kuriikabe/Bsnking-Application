#include <iostream>
using namespace std;

int amount_of_money = 450;  // Global balance variable
float amount_result;
char plus_or_minus;

// Function declarations
void Balance();
void Withdraw();
void Deposit();

int main() {
    // Banking System
    int option = 0;

    cout << "Welcome to MegaMobile Banking Application!" << endl;
    cout << "Loading..." << endl;

    cout << "What is the purpose of your visit today?" << endl;
    cout << "1. Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;

    cin >> option;  // Read user input

    switch (option) {
    case 1:
        cout << "You chose to check your Balance" << endl;
        Balance();
        break;
    case 2:
        cout << "You chose to deposit money" << endl;
        Deposit();
        break;
    case 3:
        cout << "You chose to withdraw money" << endl;
        Withdraw();
        break;
    default:
        cout << "Invalid Selection!" << endl;
        break;
    }

    return 0;
}

// Function to display balance
void Balance() {
    cout << "Your balance is: " << amount_of_money << endl;
}

// Function to withdraw money
void Withdraw() {
    cout << "Your balance is: " << amount_of_money << endl;
    cout << "How much money do you want to withdraw?" << endl;

    int take_amount;
    cin >> take_amount;  // Get the amount the user wants to withdraw

    if (take_amount > amount_of_money) {
        cout << "Insufficient funds!" << endl;
        return;
    }

    char option;
    cout << "You want to withdraw " << take_amount << "? (y/n): ";
    cin >> option;

    switch (option) {
    case 'y':
    case 'Y':
        amount_of_money -= take_amount;  // Update the global balance
        cout << "You have successfully withdrawn: " << take_amount << endl;
        break;
    case 'n':
    case 'N':
        cout << "Okay. Returning to main menu!" << endl;
        break;
    default:
        cout << "Invalid option!" << endl;
        break;
    }
}

// Function to deposit money
void Deposit() {
    cout << "Your balance is: " << amount_of_money << endl;
    cout << "How much money do you want to deposit?" << endl;

    int give_amount;
    cin >> give_amount;  // Get the amount the user wants to deposit

    char option;
    cout << "You want to deposit " << give_amount << "? (y/n): ";
    cin >> option;

    switch (option) {
    case 'y':
    case 'Y':
        amount_of_money += give_amount;  // Update the global balance
        cout << "You have successfully deposited: " << give_amount << endl;
        break;
    case 'n':
    case 'N':
        cout << "Okay. Returning to main menu!" << endl;
        break;
    default:
        cout << "Invalid option!" << endl;
        break;

        }
    }
