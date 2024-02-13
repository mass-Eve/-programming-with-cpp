// This is a super market implementation

#include <iostream>
#include <string>
#include <limits>

using namespace std;

// A supermarket class
class Supermarket{
        // A supermarket can store 100 items at max
    private:
        // The IDs of the items
        int itemID[100];

        // The names of the items
        string item_name[100];

        // The price of the items
        int price[100];

        // The position of the items
        int item_position_count;

    public:
        // To set the item_position_count of items for a newly formed supermarket shop to zero(0)
        void setItemPosition(){
            item_position_count = 0;
        }

        // To fetch the details of existing items in the supermarket
        void fetchDetails();

        // To prompt the supermarket owner for adding details about a new item in the space
        void addItem();
} ;

// A function to get the details of all the existing items inside the supermarket shop at once!
void Supermarket :: fetchDetails()
{
    if (item_position_count == 0){
        cout << "Shop Out Of Stock!!!! Sorry...." << endl ;
        cout << endl;
    }
    else{
        cout << "All the items in the shop are : " << endl;
        for (int i = 0; i < item_position_count; i++)
        {
            cout << "The item : '" << item_name[i] << "' with item ID number : '" << itemID[i] << "' is priced at Rs. " << price[i] << " only" << endl;
        }
    }
}

// To add new items in the shop
void Supermarket :: addItem(){
    cout << "Enter the item Name : " ;
    // cin >> item_name[item_position_count];
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear input buffer
    getline(cin, item_name[item_position_count]);
    cout << endl ;

    cout << "Enter the item ID : " ;
    cin >> itemID[item_position_count] ;
    cout << endl ;
    
    cout << "Enter the item price : " ;
    cin >> price[item_position_count];
    cout << endl ;

    // update value inside the item_position_count, which basically counts for the number of items present in the supermarket so that every new item could be placed on right position.
    item_position_count++ ;
}

int main()
{
    Supermarket shopOne;
    shopOne.setItemPosition();

    // Basic Shop Menu
    cout << "Welcome to Nirmal Supermarket Shop.....\n" ;

    int choice;
    cout << "Would you like to enter our supermarket shop for shopping ?, enter 1 for yes and 0 for no : ";
    cin >> choice ;

    if (choice == 1){
        while (true){
            cout << "To see full inventory of items, enter 1" << endl;
            cout << "To add new item in the inventory, enter 2" << endl;
            // cout << "To check item with specific ID, enter 3" << endl;
            cout << "To quit, enter 0" << endl;

            cin >> choice ;

            if (choice == 1){
                shopOne.fetchDetails();
            }
            else if (choice == 2){
                shopOne.addItem();
            }
            else if (choice == 0){
                cout << "Visit Us Again......" << endl;
                exit(0);
            }
            else{
                cout << "Check your inputs please!" << endl;
                cout << "Visit Us Again......" << endl;
                exit(0);
            }
        }
    }
    else{
        cout << "Visit Us Again......" << endl;
        exit(0);
    }

    return 0;
}