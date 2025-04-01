#include<iostream>
using namespace std;
class banksystem
{
    string name;
    int account_number;
    int balance;
public:
    void getvalue()
    {
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter acc no"<<endl;
        cin>>account_number;
        cout<<"Enter balance"<<endl;
        cin>>balance;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Account number:"<<account_number<<endl;
        cout<<"Balance:"<<balance<<endl;
    }
    void deposit()
    {
        int deposit_amount;

        cout<<"Enter deposit amount";
        cin>>deposit_amount;

        balance+=deposit_amount;
        cout<<"Updated total balance:"<<balance<<endl;
    }
    void withdraw()
    {
        int withdraw_amount;

        cout<<"Enter withdraw amount";
        cin>>withdraw_amount;
        if(withdraw_amount>balance)
        {
            cout<<"Error";
        }
        else
        {
            balance-=withdraw_amount;
            cout<<"Balance after withdraw:"<<balance<<endl;
        }

    }
};
int main()
{
    int ch;

    banksystem bank;
    bank.getvalue();
    bank.display();
    do {
        cout << "\nEnter choice:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "0. Exit\n";
        cin >> ch;
    switch (ch){

case 1:

    bank.deposit();
    break;
case 2:

    bank.withdraw();
    break;
case 0:
    cout<<"Exiting....";
    break;
default:
    cout<<"Wrong choice";
    break;
    }
   } while(ch!=0);

    return 0;
}
