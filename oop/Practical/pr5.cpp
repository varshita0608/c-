#include <iostream>
using namespace std;
class BankAccount {
private:
int accountNumber;
double balance;
public:
void createAccount() {
cout << "Enter Account Number: ";
cin >> accountNumber;
cout << "Enter Initial Balance: ";
cin >> balance;
}
void deposit() {
double amount;
cout << "Enter amount to deposit: ";
cin >> amount;
if (amount > 0) {
balance += amount;
cout << "Amount deposited successfully.\n";
} else {
cout << "Invalid amount.\n";
}
}
void withdraw() {
double amount;
cout << "Enter amount to withdraw: ";
cin >> amount;
if (amount > 0 && amount <= balance) {
balance -= amount;
cout << "Amount withdrawn successfully.\n";
} else {
cout << "Insufficient balance or invalid amount.\n";
}
}
void display() {
cout << "\n--- Account Details ---\n";
cout << "Account Number: " << accountNumber << endl;
cout << "Balance: " << balance << endl;
}
};
int main() {
BankAccount account;
account.createAccount();
account.deposit();
account.withdraw();
account.display();
return 0;
}