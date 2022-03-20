#include <iostream>

using namespace std;

class Box
{
private:
    double length;
    double breadth;
    double height;
    int temp = 0;

public:
    static int objectCount; // 0
    // int alpha=0;

    // constructor
    Box(double l = 2.0, double b = 2.0, double h = 2.0)
    {
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
        // ObjectCount --> Box1 = 1
        // objectCount --> Box2 = 1+1 = 2
        objectCount++;
        temp++;
    }

    // instance member function
    double Volume()
    {
        return length * breadth * height;
    }

    // static member function
    static int getCount()
    {        
        return objectCount;
    }

    int gettemp()
    {
        return temp;
    }
};

// Initialize static member of class Box
int Box::objectCount = 0;

int main(void)
{

    // Inital Stage Count:0
    cout << "Inital Stage Count: " << Box::getCount() << endl;

    Box Box1(3.3, 1.2, 1.5); // Constructor called.
    Box Box2(8.5, 6.0, 2.0); // Constructor called.

    // Final Stage Count: 2
    cout << "Final Stage Count: " << Box::getCount() << endl;

    //.................................
    cout << "tempCount: 0"
         << " ";
    Box box;
    Box box1;
    cout << "tempCount: " << box.gettemp();

    return 0;
}

/**
 * @brief
 * static member function can only acess static data member
 */