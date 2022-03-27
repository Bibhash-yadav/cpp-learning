#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    if (age < 18)
    {
        cout << "You can't drive car " << endl;
    }
    else if (age == 18)
    {
        cout << "You have to give some test" << endl;
    }
    else
    {
        cout << "You can drive car" << endl;
    }
    return 0;
}