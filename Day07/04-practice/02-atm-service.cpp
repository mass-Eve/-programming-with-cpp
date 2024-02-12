#include<iostream>
using namespace std;

class ATM{
    private :
        string account_holder_name;
        int cur_balance;
        
    public :
        string bank_branch ;

        // access private elements
        void accessInfo(){
            cout << "ACCOUNT HOLDER NAME : " << account_holder_name << endl ;
            cout << "BRANCH : " << bank_branch << endl ;
            cout << "CURRENT BALANCE : " << cur_balance << endl ;
        }
        
        // to update the information
        void updateInfo(string name, string branch, int amt)
        {
            account_holder_name = name;
            cur_balance = amt;
            bank_branch = branch;
        }
} ;

int main()
{
    ATM maneesh;

    string name;
    cout << "Enter the account holder name : " ;
    cin >> name ;

    int amt;
    cout << "Enter the current balance : " ;
    cin >> amt ;

    string branch = "MAIN BRANCH";

    cout << "Updating information >" << endl;
    maneesh.updateInfo(name, branch, amt);

    cout << endl;
    maneesh.accessInfo() ;

    return 0;
}