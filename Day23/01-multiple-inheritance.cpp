#include<iostream>
using namespace std;

class BaseClassOne{
    protected:
        int baseOneInt ;
};

class BaseClassTwo{
    protected:
        int baseTwoInt ;
};

class DerviedClass : public BaseClassOne, public BaseClassTwo{
    protected:
        int derivedInt ;

    public:
        void addInts(int one, int two){
            baseOneInt = one;
            baseTwoInt = two;
            derivedInt = baseOneInt + baseTwoInt;
        }

        void showInts(){
            cout << "This is Integer One from Base Class One : " << baseOneInt << endl;
            cout << "This is Integer Two from Base Class Two : " << baseTwoInt << endl;
            cout << "This is Integer Three from Derived Class : " << derivedInt << endl;
        }
};

int main()
{
    DerviedClass n;
    n.addInts(2, 2);
    n.showInts();
    return 0;
}