#include <iostream>
using namespace std;

class Account
{
private:
    int accId;
    string name;
    float balance;

public:

    // Default constructor
    Account()
    {
        accId = 0;
        name = "Unknown";
        balance = 0;
    }

    // Function to take input from user
    void getData()
    {
        cout << "Enter Account ID: ";
        cin >> accId;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void deposit(float amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposit successful\n";
        }
        else
        {
            cout << "Invalid deposit amount\n";
        }
    }

    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal successful\n";
        }
        else
        {
            cout << "Insufficient balance\n";
        }
    }

    void display()
    {
        cout << "\nAccount ID: " << accId << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Account a1, a2;

    cout << "Enter details for Account 1\n";
    a1.getData();

    cout << "\nEnter details for Account 2\n";
    a2.getData();

    float amt;

    cout << "\nEnter deposit amount for Account 1: ";
    cin >> amt;
    a1.deposit(amt);

    cout << "Enter withdrawal amount for Account 1: ";
    cin >> amt;
    a1.withdraw(amt);

    a1.display();

    cout << "\nEnter deposit amount for Account 2: ";
    cin >> amt;
    a2.deposit(amt);

    cout << "Enter withdrawal amount for Account 2: ";
    cin >> amt;
    a2.withdraw(amt);

    a2.display();

    return 0;
}
