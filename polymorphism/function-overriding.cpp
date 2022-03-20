// C++ program to demonstrate function overriding

#include <iostream>
using namespace std;

class Animal {
   public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Dog : public Animal {
   public:
    void print() {
        cout << "Derived Function" << endl;
        // Animal::print();
    }
    
};

int main() {
    Dog dog1, dog2;
    dog1.print();
    // dog2.Animal::print();


    return 0;
}