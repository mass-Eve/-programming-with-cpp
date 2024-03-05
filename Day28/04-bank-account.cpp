/*
Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
*/

#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private:
        int accountNumber;
        int currentBalance = 0;
        int atmPIN;
        string accountHolderFullName;
        string loanStatus = "NO LOAN";
    public:
        void createAndUpdateDetails(){
            cout << "Enter the name of the account holder : " << endl;
            cin >> accountHolderFullName;
            cout << "Enter the account number of your choice : " << endl;
            cin >> accountNumber;
        }
        void showDetails(){
            cout << "ACCOUNT HOLDER FULL NAME : " << accountHolderFullName << endl;
            cout << "ACCOUNT NUMBER : " << accountNumber << endl;
            cout << "CURRENT BALANCE : " << currentBalance << endl;
            cout << "LOAN STATUS : " << loanStatus << endl;
        }
        void updateLoanStatus(){
            int choice;
            cout << "1. Took Loan " << endl;
            cout << "2. Completed All Loan Payments\n :" ;
            cin >> choice ;
            if (choice == 1){
                loanStatus = "LOAN PENDING!";
                cout << "Updating loan status.......\n Updated!" << endl;

                cout << "LOAN STATUS : " << loanStatus << endl;
            }
            else if (choice == 2){
                loanStatus = "NO LOAN!";
                cout << "Updating loan status.......\n Updated!" << endl;

                cout << "LOAN STATUS : " << loanStatus << endl;
            }
        }
        void depositMoney(){
            cout << "Insert the atm card in the slot " << endl;
            cout << "Enter the deposit amount : ";
            int depAmt, pin;
            cin >> depAmt;
            cout << endl;

            cout << "Verify the ATM PIN : " << endl;
            cin >> pin;
            if (pin == atmPIN){
                currentBalance += depAmt;
                cout << "Balance Updated......." << endl;
                showDetails();
            }
            else{
                cout << "WRONG PIN!\nEXITING OUT OF THE DEPOSIT GATEWAY" << endl;
            }
        }
        void setAtmPIN(){
            cout << "Insert the atm card in the slot " << endl;
            cout << "verify details ......." << endl;
            showDetails();
            
            char choice;
            cout << "Enter Y/N :" << endl;
            cin >> choice;
            if (choice == 'Y' || choice == 'y'){
                cout << "Set your ATM PIN here : " ;
                cin >> atmPIN;
                cout << "ATM PIN CREATED SUCCESSFULLY" << endl;
            }
        }
        void withdrawMoney(){
            cout << "Insert the atm card in the slot " << endl;
            int pin;
            cout << "Enter your ATM PIN : " ;
            cin >> pin;

            if (pin == atmPIN){
                int withdrawAmt;
                cout << "Enter the amount to be withdrawn : " ;
                cin >> withdrawAmt;

                cout << "Done!";
                showDetails();
            }
            else{
                cout << "Can not withdraw money as the details didn't matched!" << endl;
            }
        }

};

int main()
{
    BankAccount b1;
    b1.createAndUpdateDetails();
    b1.showDetails();
    b1.updateLoanStatus();
    b1.setAtmPIN();
    b1.depositMoney();
    b1.withdrawMoney();
    return 0;
}