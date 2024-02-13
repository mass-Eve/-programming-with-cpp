// This is a super market implementation

#include <iostream>
#include <string>
using namespace std;

// A supermarket class
class Supermarket{
    private:
        // A supermarket can store 100 items
        int itemID[100];
        string item_name;
        int price[100];
        int counter;
    public:
        void setCounter(){
            counter = 0;
        }
        // To fetch the details of existing items in the supermarket
        void fetchDetails();

        // To prompt the supermarket owner for adding details about a new item in the space
        void addItem();
} ;

void Supermarket :: fetchDetails()
{
    cout << "All the items in the shop are : " << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << "The item : '" << item_name << "' with item ID number : '" << itemID[i] << "' is priced at Rs. " << price[i] << " only" << endl;
    }
}

void Supermarket :: addItem(){
    cout << "Enter the item Name : " ;
    cin >> item_name;
    cout << endl ;
    cout << "Enter the item ID : " ;
    cin >> itemID[counter] ;
    cout << endl ;
    cout << "Enter the item price : " ;
    cin >> price[counter];

    // update value inside the counter, which basically counts for the number of items present in the supermarket so that every new item could be placed on right position.
    counter++ ;
}

int main()
{
    Supermarket shopOne;
    shopOne.setCounter();
    shopOne.addItem();
    shopOne.fetchDetails();

    return 0;
}