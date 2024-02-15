# This Is Day 10 Of Learning C++
## *15 February 2024*

# Static Functions
They are created to access only the *static members* of a class.

They are accessed directly from the class name
```cpp
class <class-name> ;
    private:

    public:
        static void <func-name>(){

        }

int main(){
    // To access
    <class-name> :: <func-name>() ;
}
```