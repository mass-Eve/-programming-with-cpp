#include<iostream>
#include<string>
using namespace std;

// Representation Of A Book
class Book{
    private:
        string title;
        string author;
        string publication;
        int pages;
        float price;
        int stock;

    public:
        // Default Constructor
        Book () {}

        // Parameterised Constructor
        Book (string book_name, string author_name, string publication_h, int total_pages, float book_price, int total_copies){
            title = book_name;
            author = author_name;
            publication = publication_h;
            pages = total_pages;
            price = book_price;
            stock = total_copies;

            cout << title << " added in the store!" << endl ;
        }

        void displayDetails(){
            cout << endl;
            cout << endl;
            cout << "BOOK NAME : " << title << endl;
            cout << "AUTHOR NAME : " << author << endl;
            cout << "PUBLICATION HOUSE : " << publication << endl;
            cout << "TOTAL PAGES : " << pages << endl;
            cout << "PRICE : Rs. " << price << endl;
            cout << "TOTAL COPIES AVAILABLE :" << stock << endl;
            cout << endl;
            cout << endl;
        }

        int getPrice(){
            return price;
        }
        
        void updateStock(int newStock){
            stock = newStock;
        }
};

void addBook(Book bookStoreArr[], int capacity, int toBeFilled, int alreadyFilled){
    string book, author, publication;
    int pages, stock;
    float price;

    if ((toBeFilled + alreadyFilled) <= capacity){
        for (int i = 0; i < toBeFilled; i++){
            cout << "Make Entries For Book " << i + 1 << endl << endl;

            cout << "Enter the book name : " ; cin >> book;
            cout << "Enter the author name : " ; cin >> author;
            cout << "Enter the publication house : " ; cin >> publication;
            cout << "Enter the total pages in the book : " ; cin >> pages;
            cout << "Enter the book price : " ; cin >> price ;
            cout << "Enter the book stock available : " ; cin >> stock;

            bookStoreArr[i] = Book(book, author, publication, pages, price, stock);
        }
    }
    else{
        cout << "Can not add more than the bookstore's capacity! " << endl ;
    }
}

void startingMenu (){
    cout << "1. Show All Book Available." << endl;
    cout << "2. Add A New Book." << endl;
    cout << "3. Purchase A New Book" << endl;
    cout << "4. Exit." << endl ;
}

void displayBooks(Book arr[], int currentCapacity){
    for (int i = 0; i < currentCapacity; i++){
        cout << "-------------------------------" << endl;
        cout << "BOOK ID : " << i + 1 << endl ;
        arr[i].displayDetails();
        cout << "-------------------------------" << endl;
    }
}

void purchaseBook(Book arr[], int whichBook){
    int choice;
    arr[whichBook].displayDetails();
    cout << "CONFIRM BOOK ? " ; cin >> choice;
    if (choice == 1){
        cout << "Enter the quantities you would like to purchase : " ; cin >> choice;
        int purchase_amt = arr[whichBook].getPrice() * choice;
    }
    cout << "PAY MONEY !" << endl;
    cout << "RECEIVED !!" << endl;

    arr[whichBook].updateStock(choice);
}

int main(){
    int booksCapacity = 5;
    int bookCount = 0;
    Book bookStore[booksCapacity];

    startingMenu();

    int choice;
    while (true){
        switch (choice) {
            case 1:
                displayBooks(bookStore, bookCount); 
                break;
            case 2:
                cout << "Enter the number of books you would like to add and display on the shelves of your book store : " ; cin >> choice ;
                addBook(bookStore, booksCapacity, choice, bookCount);
                bookCount += choice;
                break;
            case 3:
                displayBooks(bookStore, bookCount); 
                cout << "Which book would you like to purchase ? " ; cin >> choice; 
                purchaseBook(bookStore, choice);
                break;
            case 4:
                cout << "Good To See You. Visit Us Again!!" << endl;
                return 0;
            default:
                cout << "Can not process your query !!" << endl;
                break;
        }
    }
    return 0;
}