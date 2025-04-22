#include<iostream>
#include<vector>

using namespace std;

class employee
{
    string emp_name;
   long double emp_salary;
    double bonus;
public:
    employee(string name,long double salary,double b = 500)
    {
        emp_name = name;
        emp_salary = salary;
        bonus = b;
    }

    inline double total_salary() const
    {
        return emp_salary + bonus;
    }
    void display() const
    {
        cout<<"Name: "<<emp_name<<endl;
        cout<<"Salary: "<<total_salary()<<endl;
    }
};

int main()
{
    int n;
    cout<<"enter the no of employee";
 cin >> n;

    vector<employee> employees;

    for (int i = 0; i < n; i++)
        {
        string name;
        long double salary, bonus;
        char hasCustomBonus;

        cout << "\nEnter details for Employee " << (i + 1) << ":\n";
        cout << "Name: ";
        cin>>name;


        cout << "Basic Salary: ";
        cin >> salary;

        cout << "Custom Bonus? (y/n): ";
        cin >> hasCustomBonus;

        if (hasCustomBonus == 'y' || hasCustomBonus == 'Y')
            {
            cout << "Enter Bonus: ";
            cin >> bonus;
            employees.emplace_back(name, salary, bonus);
           }
        else {
            employees.emplace_back(name, salary); // default bonus
            }
        }

    // Display payroll
    cout << "\n--- Employee Payroll Report ---\n";
    for (const auto& emp : employees)
        {
        emp.display();
        }
         cout<<"24CE118_chinmay";

    return 0;
}

