#include <iostream>
using namespace std;

class Adder
{
private:
    // hidden data from outside world
    int total;
    int num1 = 90;

public:
    int num2 = 0;

public:
    // constructor
    Adder(int i = 0)
    {
        total = i;
    }

    // interface to outside world
    void addNum(int number)
    {
        total += number;
    }

    // interface to outside world
    int getTotal()
    {
        return total;
    };

    int getNum1()
    {
        return num1;
    }
};

int main()
{

    Adder a;
    // cout<<a.num1<< endl;
    a.addNum(10);
    a.addNum(20);
    a.addNum(30);

    cout << "Total " << a.getTotal() << endl;
    // cout<< a.num1; // not accessible
    cout << a.num2; // accessible
    return 0;
}