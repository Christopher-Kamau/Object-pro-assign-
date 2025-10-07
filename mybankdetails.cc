#include <iostream>
using namespace std;

class AccountHolder {
protected:
    string name;
public:
    void setName(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
};

class BankAccount : public AccountHolder {
private:
    int accountNumber;
    double balance;
public:
    BankAccount(string n, int accountNo, double bal) {
        setName(n);
        accountNumber = accountNo;
        balance = bal;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;
public:
    SavingsAccount(string n, int accNum, double bal, double rate) : BankAccount(n, accNum, bal) {
        interestRate = rate;
    }
    double getInterestRate() {
        return interestRate;
    }
};

int main() {
    SavingsAccount mySavings("Chris Doe", 12345, 5000.0, 2.5);

    cout << "Account Holder: " << mySavings.getName() << endl;
    cout << "Account Number: " << mySavings.getAccountNumber() << endl;
    cout << "Balance: " << mySavings.getBalance() << endl;
    cout << "Interest Rate: " << mySavings.getInterestRate() << "%" << endl;

    return 0;
}
