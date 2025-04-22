/*Implement a BankAccount class to simulate a banking system
Data Members:
o Account holder name, account number, balance.
Constructors:
o Default constructor to initialize balance as 0.
o Parameterized constructor to initialize name, account number, and starting
balance.
Member functions:
o deposit(amount) to add money.
o withdraw(amount) to deduct money (check for sufficient balance).
o displayAccountDetails() to show account details.
Tasks:
o Create multiple accounts with both constructors.
o Test the deposit, withdrawal, and display functionalities.
*/
#include<iostream>
using namespace std;
class AcHolder
{
    string name;
    long int AcNom;
    float balance;
public:
    AcHolder()
    {
        name ="";
        AcNom =0;
        balance=0;
    }
    AcHolder(string n,long int a,float b)
    {
        name =n;
        AcNom=a;
        balance=b;
    }
    void deposit()
    {
        float amt;
        cout<<"enter the amount that u want to deposit";
        cin>>amt;
        balance+=amt;
    }
    void withdraw()
    {
        float w;
        cout<<"enter the amount that u want to withdraw";
        cin>>w;
        if(w>balance)
        {
            cout<<"error";

        }
        balance-=w;
    }
    void display()
    {
        cout<<"NAME :"<<name<<endl;
        cout<<"AC/NOM :"<<AcNom<<endl;
        cout<<"CURRENT BALANCE :"<<balance<<endl<<endl;
    }
};
int main()
{
    AcHolder test;
    test.display();

    AcHolder p[3];

    long int a;
    float b;
    string n;
    for(int i=0;i<3;i++)
    {
        cout<<"for ac holder :"<<i+1<<endl;
        cout<<"enter the name of account holder :";
        cin>>n;
        cout<<"enter the account no. :";
        cin>>a;
        cout<<"enter the balance :";
        cin>>b;
       p[i]= AcHolder(n,a,b);
    }
    for(int i=0;i<3;i++)
    {
        cout<<"deposit for"<<i+1<<" account"<<endl;
        p[i].deposit();
    }
for(int i=0;i<3;i++)
    {
        cout<<"withdraw for"<<i+1<<" account"<<endl;
        p[i].withdraw();
    }
    for(int i=0;i<3;i++)
    {
        cout<<"info display for"<<i+1<<" account"<<endl;
        p[i].display();
    }
    cout<<"24CE118_chinmay";
return 0;

}


