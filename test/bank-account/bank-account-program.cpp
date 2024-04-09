#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class BankAccount{
    private:
        string owner;
        int accountNumber;
        int phoneNumber;                // Not to be displayed
    protected:
        string accountType;
        int PIN;                        // Not to be displayed 
        int balance;
        int checkBookCount;
    public:
        void assignAccountNumber(){}

        void displayDetails(){
            cout << "ACCOUNT OWNER : " << owner << endl;
            cout << "ACCOUNT NUMBER : " << accountNumber << endl;
            cout << "ACCOUNT TYPE : " << accountType << endl;
            cout << "CURRENT BALANCE : " << balance << endl;
        }

        void createAccount(){
            cout << "Enter your name : " ; 
            getline(cin, owner);
            cout << "Enter your phone number : " ; 
            cin >> phoneNumber;
            assignAccountNumber();
        }

        void createPIN(){
            cout << "To create the PIN, verify your phone number : " << endl;

            int temp;
            cout << "Enter your phone number : " ; cin >> temp;

            if (temp == phoneNumber){
                cout << "NUMBER MATCHED ! Enter the OTP sent to your phone number ~ " ; cin >> temp;

                // some functionality to match the OTP

                cout << "SET YOUR 8-DIGIT PIN : " ; cin >> temp ; 
                int temp2;
                cout << "CONFIRM YOUR PIN AGAIN : " ; cin >> temp2 ;

                if (temp == temp2){
                    PIN = temp;
                    cout << "PIN CREATED SUCCESSFULLY!!" << endl;
                }
                else{
                    cout << "PIN DIDN'T MATCHED! PLEASE TRY AGAIN LATER !!" << endl;
                }
            }
            else{
                cout << "PHONE NUMBER DIDN'T MATCHED !! TRY AGAIN !!" << endl;
            }
        }

        void updateBalance(int amt, int key){
            // key == 1 ; withdraw money
            // key == 2 ; credit money

            switch (key){
                case 1:
                    balance -= amt;
                    break;
                case 2:
                    balance += amt;
                    break;
            }
            cout << "BALANCE UPDATED !!" << endl;
        }

        void withdrawMoney(){
            int temp;
            cout << "VERIFY YOUR IDENTITY, ENTER THE REGISTERED NUMBER : " ; cin >> temp;

            if (temp == phoneNumber){
                // functionality for otp verification
                cout << "CHECK YOUR DETAILS AVAILABLE IN THE SYSTEM ~ " << endl;
                displayDetails();

                cout << "ENTER 1 FOR YES AND 0 FOR NO " ; cin >> temp;

                switch (temp){
                    case 0 :
                        cout << "TRY AGAIN !" ;
                        exit(0);
                    case 1:
                        int amt;
                        cout << "ENTER THE AMOUNT YOU WANT TO WITHDRAW : " ; cin >> amt;

                        if (amt <= balance){
                            cout << "ENTER PIN : " ; cin >> temp;
                            if (temp == PIN){
                                cout << "TRANSACTION COMPLETED" << endl;
                                updateBalance(amt, 1);
                            }
                            else{
                                cout << "WRONG PIN !!" << endl;
                            }
                        }
                        else{
                            cout << "INSUFFICIENT BALANCE !! " << endl;
                        }
                        break;
                }
            }
            else{
                cout << "CAN NOT VERIFY YOU ! PHONE NUMBER DIDN'T MATCHED !! " << endl;
            }
        }

        void depositMoney(){
            int temp;
            cout << "VERIFY YOUR IDENTITY, ENTER THE REGISTERED NUMBER : " ; cin >> temp;

            if (temp == phoneNumber){
                // functionality for otp verification
                cout << "CHECK YOUR DETAILS AVAILABLE IN THE SYSTEM ~ " << endl;
                displayDetails();

                cout << "ENTER 1 FOR YES AND 0 FOR NO : " ; cin >> temp;

                switch (temp){
                    case 0 :
                        cout << "TRY AGAIN !" ;
                        exit(0);
                    case 1:
                        int amt;
                        cout << "ENTER THE AMOUNT YOU WANT TO DEPOSIT : " ; cin >> amt;

                        cout << "ENTER PIN : " ; cin >> temp;
                        
                        if (temp == PIN){
                            cout << "TRANSACTION COMPLETED! " << endl;
                            updateBalance(amt, 2);
                        }
                        else{
                            cout << "WRONG PIN !!" << endl;
                        }
                        break;
                }
            }
            else{
                cout << "CAN NOT VERIFY YOU ! PHONE NUMBER DIDN'T MATCHED !! " << endl;
            }
        }

        void getCheckBook(){
            checkBookCount += 1;
            cout << "Checkbook Issued !!" << endl;
        }

        void totalCheckBooksIssuedCheck(){
            cout << checkBookCount << endl;
        }
} ;

class SavingsAccount : protected BankAccount {
    public:
        void createAccount(){
            BankAccount :: createAccount();
            cout << "Enter the initial amount you would like to deposit in your account : " ; 
            cin >> balance ;
            accountType = "SAVINGS ACCOUNT" ;
            checkBookCount = 0;
            getCheckBook();

            cout << "A SAVINGS ACCOUNT is opened with the following details ~" << endl ;
            displayDetails();
        }

        void interestCalculate(){
            float ci, a, p, air, arp, compund_times, time;
            p = balance;
            air = 5;
            arp = float(air) / 100.0 ;
            time = 1; // time in year
            compund_times = 1; // how many times to compund every year 

            // calculations
            a = p * pow((1 + arp / time), time*compund_times) ;
            ci = a - p;

            cout << "The amount of Interest to be added after one year for maintaining this amount will be Rs " << ci << endl; 
        }

        // Ambiguity Resolutions
        void totalCheckBooksIssuedCheck(){
            BankAccount :: totalCheckBooksIssuedCheck();
        }
        void getCheckBook(){
            BankAccount :: getCheckBook();
        }
        void displayDetails(){
            BankAccount :: displayDetails();
        }
        void createPIN(){
            BankAccount :: createPIN();
        }
        void depositMoney(){
            BankAccount :: depositMoney();
        }
        void withdrawMoney(){
            BankAccount :: withdrawMoney();
        }
};


int CurrentAccount :: minimumBalance = 5000;
class CurrentAccount : protected BankAccount {
    protected:
        static int minimumBalance;
    public:
        void createAccount(){
            BankAccount :: createAccount();
            cout << "Enter the initial amount you would like to deposit in your account. It should be greater than the minimum balance requirement, which is 5000 RS : " ; cin >> balance ;
            accountType = "CURRENT ACCOUNT" ;
            checkBookCount = 0;
            getCheckBook();

            cout << "A CURRENT ACCOUNT is opened with the following details ~ " << endl ;
            displayDetails();
            minimumBalance;
        }
};

int main(){
    SavingsAccount one;
    
    while (true){
        one.createAccount();
        cout << endl << endl;

        one.displayDetails();
        cout << endl << endl;
        
        one.createPIN();
        cout << endl << endl;
        
        one.depositMoney();
        cout << endl << endl;
        
        one.displayDetails();
        cout << endl << endl;
        
        one.withdrawMoney();
        cout << endl << endl;
        
        one.displayDetails();
        cout << endl << endl;
        break;
    }

    return 0;
}
