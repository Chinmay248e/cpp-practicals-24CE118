#include<iostream>
using namespace std;

// Base class: Person
class Person
{
protected:
    string name;
    int age;

public:
    Person()
    {
        name = "N/A";
        age = 0;
    }

    Person(string n, int a)
    {
        name = n;
        age = a;
    }

    void getPersonDetails()
    {
        cout << "Enter Name: ";
        cin.ignore(); // clear leftover newline
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPerson() const
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};


class Employee : public Person
{
protected:
    int employeeID;

public:
    Employee() : Person()
    {
        employeeID = 0;
    }

    Employee(string n, int a, int id) : Person(n, a)
    {
        employeeID = id;
    }

    void getEmployeeDetails()
    {
        getPersonDetails();
        cout << "Enter Employee ID: ";
        cin >> employeeID;
    }

    void displayEmployee() const
    {
        displayPerson();
        cout << "Employee ID: " << employeeID << endl;
    }
};

// Derived class: Manager
class Manager : public Employee
{
private:
    string department;

public:
    Manager() : Employee()
    {
        department = "N/A";
    }

    Manager(string n, int a, int id, string dept) : Employee(n, a, id)
    {
        department = dept;
    }

    void getManagerDetails()
    {
        getEmployeeDetails();
        cout << "Enter Department: ";
        cin.ignore();
        getline(cin, department);
    }

    void displayManager() const {
        displayEmployee();
        cout << "Department: " << department << endl;
    }
};

int main()
{
    const int size = 3;
    Manager managers[size];


    for (int i = 0; i < size; i++)
        {
        cout << "\nEnter details for Manager " << i + 1 << ":\n";
        managers[i].getManagerDetails();
    }


    cout << "\n--- Manager Details ---\n";
    for (int i = 0; i < size; i++) {
        cout << "\nManager " << i + 1 << ":\n";
        managers[i].displayManager();
    }

    cout << "\n24CE118_chinmay\n";
    return 0;
}

