#include<iostream>
using namespace std;

class Interest
{
    public:
    int principal;
    int year;
    float rate;
    float simpleInterest;

    void setDetails()
    {
        cout << "Enter Principal Amount: ";
        cin >> principal;
        cout << "Enter Number of Years: ";
        cin >> year;
        cout << "Enter Interest Rate: ";
        cin >> rate;

        if (rate == 0)
        {
            rate = 2.5; 
        }
        
        simpleInterest = (principal * year * rate) / 100.0;
    }

    void Display()
    {
        cout << "Principal: " << principal << endl;
        cout << "Year: " << year << endl;
        cout << "Rate: " << rate << "%" << endl;
        cout << "Simple interest: " << simpleInterest << endl;
    }
};

int main()
{
    Interest data;
    data.setDetails();
    data.Display();

    return 0;
}
