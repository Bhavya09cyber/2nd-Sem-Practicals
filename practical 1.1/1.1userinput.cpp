#include <iostream>
using namespace std;

class Wallet
{
private:
    int walletID;
    string name;
    float balance;

public:

    Wallet()
    {
        walletID = 0;
        name = "unknown";
        balance = 0;
    }

    void getdata()
    {
        cout << "Enter Wallet ID: ";
        cin >> walletID;

        cout << "Enter Name: ";
        cin.ignore();        // clear buffer
        getline(cin, name);  // FIXED semicolon

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void loadMoney(float amount)
    {
        balance = balance + amount;
        cout << "Money loaded successfully.\n";
    }

    void transferMoney(Wallet &receiver, float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            receiver.balance = receiver.balance + amount;
            cout << "Transfer successful.\n";
        }
        else
        {
            cout << "Error: Insufficient balance!\n";
        }
    }

    void display()
    {
        cout << "\nWallet ID: " << walletID << endl;
        cout << "User Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Wallet w1, w2;

    cout << "\nEnter details for Wallet 1\n";
    w1.getdata();

    cout << "\nEnter details for Wallet 2\n";
    w2.getdata();

    w1.loadMoney(1000);
    w1.transferMoney(w2, 3000);

    w1.display();
    w2.display();

    return 0;
}
