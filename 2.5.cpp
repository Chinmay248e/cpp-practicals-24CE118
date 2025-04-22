
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Loan
{
    public:
    int LoanID;
    string ApplicantName;
    float LoanAmount;
    float InterestRate;
    int LoanDuration;

    Loan()
    {
        LoanID=0;
        ApplicantName="N/A";
        LoanAmount=0;
        InterestRate=0;
        LoanDuration=0;
    }
    Loan(int id,string name,float amount,float rate,int duration)
    {
        LoanID=id;
        ApplicantName=name;
        LoanAmount=amount;
        InterestRate=rate;
        LoanDuration=duration;
    }
    double CalcuiateEMI()
    {
        double MonthyinterestRate = InterestRate/(12*100);
        double EMI = (LoanAmount * MonthyinterestRate * (pow(1 + MonthyinterestRate, LoanDuration))) / (pow(1 + MonthyinterestRate, LoanDuration) - 1);
        return EMI;
    }
    void DisplayLoanDatials()
    {
        cout<<"Loan ID : "<<LoanID<<endl;
        cout<<"Applicant Name : "<<ApplicantName<<endl;
        cout<<"Loan Aount : "<<LoanAmount<<endl;
        cout<<"Interst Rate : "<<InterestRate<<"%"<<endl;
        cout<<"Loan Duration : "<<LoanDuration<<"year"<<endl;
        cout<<"Monthly EMI : "<<CalcuiateEMI()<<endl;
    }
};
int main()
{
    Loan L1,L2;

    L1 = Loan();
    L2 = Loan(1,"chinmay",100000,10,2);

    cout<<"Loan 1 Details : "<<endl;
    L1.DisplayLoanDatials();
    cout << "------------------------" << endl;

    cout<<"Loan 2 Details : "<<endl;
    L2.DisplayLoanDatials();
    cout << "------------------------" << endl;
    cout<<"24CE118_chinmay.";
    return 0;
}
