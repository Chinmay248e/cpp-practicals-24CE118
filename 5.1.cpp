#include<iostream>
#include<string>
#include<vector>
using namespace std;
class calculator
{
public:
    int add(int a,int b)
    {
        return a+b;
    }
    double add(double a, double b)
    {
        return a+b;
    }
    double add(int a,double b)
    {
        return a+b;
    }
};
int main()
{
    calculator c;
    // STL approach:
    vector<double>result;
    result.push_back(c.add(5,19));
    result.push_back(c.add(5.3,19.09));
    result.push_back(c.add(5,19.23));
    for(int i=0;i<result.size();i++)
    {
        cout<<"result "<<i+1<<":"<<result[i];
    }
    return 0;
}
