#include<iostream>
using namespace std;

class BankAccount
{
    public:

    string depositerName;
    int accountNumber;
    string accountType;
    int balance;

    void setDetails()
    {
        cout << "Depositer Name: ";
        cin >> depositerName;
        cout << "Account Number: ";
        cin >> accountNumber;
        cout << "Account Type: ";
        cin >> accountType;
        cout << "Balance: ";
        cin >> balance;
    }

    void deposite()
    {
        int amount;
        cout << "deposit Amount: ";
        cin >> amount;
        balance += amount;
        cout << "Balance after deposit: " << balance << endl;
    }

    void withdraw()
    {
        int amount;
        cout << "withdraw Amount: ";
        cin >> amount;
        if (amount > balance)
        {
            cout << "Please depositfunds for withdraw amount." << endl;
        }
        else
        {
            balance -= amount;
            cout << "Balance after withdrawal: " << balance << endl;
        }
    }

    void ShowDetails()
    {
        cout << "Depositer Name: " << depositerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
    }
};

int main()
{
    BankAccount data;

    data.setDetails();
    data.ShowDetails();
    data.deposite();
    data.withdraw();

    return 0;
}
