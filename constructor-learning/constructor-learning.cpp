#include <iostream>
using namespace std;

class Animal {     // The class
  public:           // Access specifier
    Animal() {     // Constructor
      cout << "Creating Object of Animal";
    }
    public:           // Access specifier
    Animal(int height) {     // Constructor
      cout << "Creating Object of Animal with Height";
    }
public:           // Access specifier
    Animal(int height, string color) {     // Constructor
      cout << "Creating Object of Animal with Height and Color";
    }
public:           // Access specifier
    Animal(int height, int weight) {     // Constructor
      cout << "Creating Object of Animal with Height and Weight";
    }


};

int main() {
  // Animal cat;   // Create an object of MyClass (this will call the constructor)
//   Animal dog(2, "black");
  // Animal cow(101, 80);
//   Animal horse(4);
  return 0;
}


/**
 * @brief 
 * constructor is a method
 * has same name as class
 * cannot have return type
 * can be parameterless or with parameter
 * is called when object of class is created
 */


/**
 * @brief 
 * Overloading
 * 1. Number of parameter change
 * 2. Type of Paramter change
 */