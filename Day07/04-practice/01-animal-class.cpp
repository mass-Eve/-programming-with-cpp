#include<iostream>
#include<string>
using namespace std;

class Animals{
    public :
        string type ;   // Type of animal - dog, cat, horse etcc
        string name ;   // name of the animal
        int age ;       // age of the animal
        int weight ;    // weight of the animal
} ;

int main()
{
    Animals dog1;

    dog1.type = "Dog" ;
    dog1.name = "Lucky" ;
    dog1.age = 2;
    dog1.weight = 5;

    cout << "Type of the animal ~ " << dog1.type << endl ;
    cout << "Name of the animal ~ " << dog1.name << endl ;
    cout << "Age of the animal ~ " << dog1.age << endl ;
    cout << "Weight of the animal ~ " << dog1.weight << endl ;

    return 0;
}