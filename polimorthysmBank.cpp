#include <iostream>
using namespace std;

class BankAccount {
public:
    void deposit(int amount) {
        balance += amount;
    }

    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Недостаточно средств на счете." << endl;
        }
        else {
            balance -= amount;
        }
    }

protected:
    int balance = 0;
};

class SavingsAccount : public BankAccount {
public:
    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Недостаточно средств на счете." << endl;
        }
        else if (amount > 1000) {
            cout << "Снятие средств свыше 1000 рублей облагается комиссией." << endl;
            amount -= 100;
        }
        else {
            balance -= amount;
        }
    }
};

class CheckingAccount : public BankAccount {
public:
    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Недостаточно средств на счете." << endl;
        }
        else if (amount > 500) {
            cout << "Снятие средств свыше 500 рублей облагается комиссией." << endl;
            amount -= 50;
        }
        else {
            balance -= amount;
        }
    }
};

int main() {

    setlocale(LC_ALL, "RU"); 
    system("chcp 1251");

    SavingsAccount savingsAccount;
    CheckingAccount checkingAccount;

    savingsAccount.deposit(10000);
    savingsAccount.withdraw(500);
    savingsAccount.withdraw(1500);

    checkingAccount.deposit(1000);
    checkingAccount.withdraw(500);
    checkingAccount.withdraw(1500);

    return 0;
}