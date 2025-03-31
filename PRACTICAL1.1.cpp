#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:

    void setAccountDetails(string name, int accNumber, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Deposit amount must be positive" << endl;
        }
    }


    void withdraw(double amount) {
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrew " << amount << ". New balance: " << balance << endl;
            } else {
                cout << "Error: Insufficient balance" << endl;
            }
        } else {
            cout << "Withdrawal amount must be positive" << endl;
        }
    }
    void checkBalance() {
        cout << "Account balance for " << accountHolderName << ": " << balance << endl;
    }

    int getAccountNumber() {
        return accountNumber;
    }


    string getAccountHolderName() {
        return accountHolderName;
    }
};

int main() {
    string name;
    int accNumber;
    double initialBalance;


    cout << "Enter account holder's name: ";
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> accNumber;
    cout << "Enter initial balance: ";
    cin >> initialBalance;


    BankAccount account1;

    account1.setAccountDetails(name, accNumber, initialBalance);

    int choice;
    double amount;

    do {
        ;
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:

                cout << "Enter deposit amount: ";
                cin >> amount;
                account1.deposit(amount);
                break;

            case 2:

                cout << "Enter withdrawal amount: ";
                cin >> amount;
                account1.withdraw(amount);
                break;

            case 3:

                account1.checkBalance();
                break;

            case 4:

                cout << "Exiting....." << endl;
                break;

            default:
                cout << "Invalid choice! " << endl;
        }
    } while (choice != 4);
    cout<<"24CE019_DHRUVRAJCHUDASAMA";

    return 0;
}
