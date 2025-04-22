#include <iostream>
#include <vector>

using namespace std;

class bank //Create class of bank
{
private:
    int account_number;
    string account_name;
    double balance;
    static int count;

public:
    bank(int num, string name, double bal) //Parameterized Constructor
    {
        account_number = num;
        account_name = name;
        balance = bal;
        count++;
    }
    void details() //Before deposit display details
    {
        cout <<endl << "Account Number: " << account_number << endl;
        cout << "Account Holder Name: " << account_name << endl;
        cout << "Initial Balance: " << balance << endl;
    }
    void deposite(double d)
    {
        balance += d;
        cout <<endl << "Deposite in account 1: " << balance << endl;
    }
    void withdraw(double w)
    {
        if (balance > w)
        {
            balance -= w;
            cout << "Withdraw in account 2: " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance!!" << endl;
        }
    }
    void display() //After deposit display details
    {
        cout<<"Account Name : "<<account_name<<endl;
        cout<<"Account Number : "<<account_number<<endl;
        cout<<"Account Total Balance : "<<balance<<endl<<endl;
    }
    static int get_count()
    {
        return count;
    }

    friend void transfer_money(bank &from, bank &to, double amount);
};

int bank ::count = 0;

void transfer_money(bank &account1, bank &account2, double amount) //Function that transfer money to one account to anonther account
{
    account1.balance -= amount;
    account2.balance += amount;
    cout << endl << "Transferred " << amount << " from account 1 to account 2" << endl;
    cout << "Deposited in account 1 to account 2: " << account2.balance << endl;
}

int main()
{
    // Create two bank account objects
    bank account_1(1234, "chinmay", 1000);
    bank account_2(7777, "prince", 4000);

    cout << "<--------------Account 1 Details------------>" << endl;
    account_1.details();

    cout << "<--------------Account 2 Details------------>" << endl;
    account_2.details();

    //Perform transections
    account_1.deposite(100);
    account_2.withdraw(50);

    transfer_money(account_1, account_2, 100); // Transfer money from account 1 to account 2

    cout << "<---------------Account 1-------------->" << endl;
    account_1.display();

    cout << "<---------------Account 2-------------->" << endl;
    account_2.display();

    cout << "Total Account: " << bank::get_count() << endl; // Show total number of accounts created

    cout << "\n\n24CE118_chinmay\n\n";
    return 0;
}
