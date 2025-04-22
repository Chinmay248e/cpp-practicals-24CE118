#include<iostream>
#include<vector>
#include<string>
using namespace std;
class student
{
    protected:
    float marks;
    public:
    void setMarks(float m)
    {
       marks=m;
    }
    virtual string computeGrade()=0;

};
class undergraduate:public student
{
string computeGrade()override
{
if (marks>=85)
{
    /* code */
    return "A";
}
else if(marks>=70)
{
    /* code */
    return "B";
}
else if(marks>=50)
{
    return "c";
}
else{
    return "F";
}

}
};
class postgraduate:public student
{
string computeGrade()override
{
if (marks>=90)
{
    /* code */
    return "A";
}
else if(marks>=75)
{
    /* code */
    return "B";
}
else if(marks>=60)
{
    return "c";
}
else{
    return "F";
}

}
};
int main()
{
    vector<student*>students;
    int n;
    cout<<"enter no of students:";
    cin>>n;
    for(int i =0;i<n;i++)
    {
        int type;
        float m;
        cout<<"enter the type of student (1 for UG & 2 for PG)";
        cin>>type;
        cout<<"enter the marks";
        cin>>m;
        student *s=nullptr;
        if(type==1)
        {
            s=new undergraduate();
        }
        else if(type==2)
        {
            s = new postgraduate();
        }
        else{
            cout<<"invalid student type";
            continue;
        }
        s->setMarks(m);
        students.push_back(s);
    }
    cout<<endl<<"student grades"<<endl;
    for(int i=0;i<students.size();++i)
    {
        cout<<"student"<<i+1<<" grade "<<students[i]->computeGrade()<<endl;
    }
    for(int i=0;i<students.size();++i)
    {
        delete students[i];
    }
    cout<<"24CE118_chinmay";
    return 0;
}
