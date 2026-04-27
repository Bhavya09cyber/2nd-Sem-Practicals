#include <iostream>
#include <cmath>
using namespace std;

class Loan {
private:
    int loanID;
    string applicantName;
    double loanAmount;
    double annualInterestRate;
    int tenure;
    double emi;

public:

    Loan() {
        loanID = 0;
        applicantName = "Not Assigned";
        loanAmount = 0;
        annualInterestRate = 0;
        tenure = 0;
        emi = 0;
    }


    Loan(int id, string name, double amount, double rate, int t) {
        loanID = id;
        applicantName = name;
        loanAmount = amount;
        annualInterestRate = rate;
        tenure = t;
        calculateEMI();
    }


    void input() {
        cout << "Enter Loan ID: ";
        cin >> loanID;

        cout << "Enter Applicant Name: ";
        cin.ignore();
        getline(cin, applicantName);

        cout << "Enter Loan Amount: ";
        cin >> loanAmount;

        cout << "Enter Annual Interest Rate (%): ";
        cin >> annualInterestRate;

        cout << "Enter Loan Tenure (in months): ";
        cin >> tenure;

        calculateEMI();
    }


    void calculateEMI() {
        double r = annualInterestRate / (12 * 100); // monthly rate

        if (r == 0) {
            emi = loanAmount / tenure;
        } else {
            double power = pow(1 + r, tenure);
            emi = (loanAmount * r * power) / (power - 1);
        }
    }


    void display() {
        cout << "\n===== Loan Details =====\n";
        cout << "Loan ID: " << loanID << endl;
        cout << "Applicant Name: " << applicantName << endl;
        cout << "Loan Amount: " << loanAmount << endl;
        cout << "Annual Interest Rate (%): " << annualInterestRate << endl;
        cout << "Tenure (months): " << tenure << endl;
        cout << "Monthly EMI: " << emi << endl;
        cout << "-------------------------\n";
    }
};

int main() {
    Loan L1;

    cout << "\n--- Enter Loan Details ---\n";
    L1.input();
    L1.display();
    return 0;
}
