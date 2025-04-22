/*Write a program to define a Student class with the following:
Data Members:

o rollNumber, name, and marks (array of 3 subjects).

Constructors:

o Default constructor to initialize values to default (e.g., roll number
as 0, name as "N/A").
o Parameterized constructor to initialize data from input.

Member functions:

o displayDetails() to print student details.
o calculateAverage() to calculate the average marks.

Tasks:

o Create an array of Student objects using both constructors.
o Print their details and average marks.*/
#include<iostream>

using namespace std;

class student
{
private:
    int roll_number;
    string name;
    int marks[3];
public:
    student()
    {
        roll_number = 0;
        name = "N/A";
        marks[0] = marks[1] = marks[2] = 0;
    }
    student(int r,string n,int m1,int m2,int m3)
    {
        roll_number = r;
        name = n;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }
    double calculate_avg()
    {
        return (marks[0]+marks[1]+marks[2])/3.0;
    }

    void display_details()
    {
        cout<<"Roll Number: "<<roll_number<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks 1: "<<marks[0] <<",Marks 2: "<<marks[1] <<",Marks 3: "<<marks[2]<<endl;
        cout<<"Average Marks: "<<calculate_avg()<<endl;
    }
};

int main()
{

    student s[3];
    for(int i = 0; i<3; i++)
    {
        int r,m1,m2,m3;
        string n;

        cout<<"For Student "<<i+1<<endl;
        cout<<"Enter Roll number: ";
        cin>>r;
        cout<<"Enter Name: ";
        cin>>n;
        cout<<"Enter marks of 3 subjects: "<<endl;
        cin>>m1>>m2>>m3;

        s[i] = student(r,n,m1,m2,m3);
    }

    for(int i = 0; i<3; i++)
    {
        if(i == 0)
        {
            s[i] = student();
        }
        cout<<"Student "<<i+1<<" Details: "<<endl;
            s[i].display_details();
    }
     cout<<"24CE118_chinmay";

    return 0;
}


