#include <iostream>
using namespace std;

class Adder
{
public:
    int total;

    // public:
    //     Adder(int num)
    //     {
    //         total=num;
    //     }

public:
    Adder()
    {
        total = 0;
    }
};

int main()
{
    // Adder a(10);
    Adder a;
    cout << a.total;

    return 0;
}