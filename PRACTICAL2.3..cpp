#include <iostream>
using namespace std;

class Account
 {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:

    Account(string name, int accNumber) {
        accountHolder = name;
        accountNumber = accNumber;
        balance = 0.0;
    }


    Account(string name, int accNumber, double initialBalance)
     {
        accountHolder = name;
        accountNumber = accNumber;
        balance = initialBalance;
     }


    void deposit(double amount)

    {
        if (amount > 0)
            {
            balance += amount;
            cout << "Successfully deposited " << amount << " into account " << accountNumber << ".\n";
            }

            else

            {
            cout << "Invalid deposit amount. Please enter a positive amount.\n";
            }
    }
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Successfully withdrawn " << amount << " from account " << accountNumber << ".\n";
        } else if (amount > balance) {
            cout << "Insufficient funds! Withdrawal failed.\n";
        } else {
            cout << "Invalid withdrawal amount.\n";
        }
    }


    void displayAccountSummary() const
     {
        cout << "\n----------------------------------\n";
        cout << "Account Summary:\n";
        cout << "Account Holder: " << accountHolder << "\n";
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Balance: " << balance << "\n";
        cout << "----------------------------------\n";
    }


    int getAccountNumber() const
    {
        return accountNumber;
    }
};

int main()
{
    cout << "Welcome to the Bank Account Management System!\n";


    char name1[50], name2[50];
    int accNumber1, accNumber2;
    double initialBalance;

    cout << "\nEnter details for Account 1 (No initial balance required):\n";
    cout << "Enter Account Holder Name: ";
    cin >> name1;
    cout << "Enter Account Number: ";
    cin >> accNumber1;

    cout << "\nEnter details for Account 2 (With initial balance):\n";
    cout << "Enter Account Holder Name: ";
    cin >> name2;
    cout << "Enter Account Number: ";
    cin >> accNumber2;
    cout << "Enter Initial Balance: ";
    cin >> initialBalance;


    Account account1(name1, accNumber1);
    Account account2(name2, accNumber2, initialBalance);


    int choice, accNumber;
    double amount;

    do {
        cout << "\nBanking System Menu:\n";
        cout << "1. Deposit\n2. Withdraw\n3. Display Account Summary\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            cout << "Enter Account Number: ";
            cin >> accNumber;
        }

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (accNumber == account1.getAccountNumber()) {
                    account1.deposit(amount);
                } else if (accNumber == account2.getAccountNumber()) {
                    account2.deposit(amount);
                } else {
                    cout << "Invalid Account Number!\n";
                }
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (accNumber == account1.getAccountNumber()) {
                    account1.withdraw(amount);
                } else if (accNumber == account2.getAccountNumber()) {
                    account2.withdraw(amount);
                } else {
                    cout << "Invalid Account Number!\n";
                }
                break;

            case 3:
                if (accNumber == account1.getAccountNumber()) {
                    account1.displayAccountSummary();
                } else if (accNumber == account2.getAccountNumber()) {
                    account2.displayAccountSummary();
                } else {
                    cout << "Invalid Account Number!\n";
                }
                break;

            case 4:
                cout << "Exiting program... Thank you!\n";
                break;

            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    } while (choice != 4);




    return 0;
}
