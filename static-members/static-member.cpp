// C++ program to demonstrate static
// variables inside a class

#include <iostream>
using namespace std;

class GfG
{
public:
    static int i; //static member --> class prop = 101
    int j = 0; //instance meber --> obj prop

    GfG(){
        // Do nothing
    };
};

int GfG::i = 10;
// int GfG::j=0; //bcoz j is not class emmber/static

int main()
{
    GfG obj1;
    obj1.i = 101; // --> i : GfG
    obj1.j = 102; // --> j : obj1

    cout << obj1.i << " "; //101
    cout << obj1.j << " "; //102

    GfG obj2;
    cout << obj2.i << " ";//101
    cout << obj2.j << " ";//100

    GfG onj3;
    cout << onj3.i;
}

/**
 * @brief
 * static: class prop
 * instance: obj prop
 * static <-- value : shared with all object
 * instance <-- value: available to setter obj
 * 
 *Instance: object
 *Static: class
 */