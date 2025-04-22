/*Design a simple class BankAccount to represent a bank account. It should have
the following:
Attributes:
o Account holder's name, account number, and balance.
Methods:
o deposit(amount): to add money to the account.
o withdraw(amount): to deduct money from the account if sufficient balance
exists. Otherwise, print an error message.
o display_balance() to show the current balance.
Requirements:
o Demonstrate object-oriented principles: encapsulation and abstraction.
o Test the class by creating multiple accounts and performing operations.*/
#include<iostream>
using namespace std;
class bankDetails
{
    char name[20];
    int AccountNumber;
    long int balance =1000000;
public:
    void AddDetails();
    void deposit();
    void withdraw();
    void DisplayBalence();
};
void bankDetails::AddDetails()
{
    cout<<"enter your name :";
    cin>>name;
    cout<<"enter account number :";
    cin>>AccountNumber;
}
void bankDetails::deposit()
{
    float depositMoney;
  cout<<"enter the money that you want to deposit";
  cin>>depositMoney;
  balance=balance+depositMoney;
}
void bankDetails::withdraw()
{
    float withdrawAmount;
    cout<<"enter the amount that you want to withdraw";
    cin>>withdrawAmount;
    if(withdrawAmount>balance)
    {
        cout<<"error";

    }
    balance=balance-withdrawAmount;
}
void bankDetails::DisplayBalence()
{
    cout<<"NAME:"<<name<<endl<<"AC/NOM:"<<AccountNumber<<endl;
    cout<<"your balence is :"<<balance;
}
int main()
{
     bankDetails p;
    p.AddDetails();
     p.deposit();
     p.withdraw();
    p.DisplayBalence();
    cout<<"24CE118_chinmay";
    return 0;


}

