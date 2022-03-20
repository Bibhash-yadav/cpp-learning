#include <iostream>
using namespace std;

int main()
{
    int age;
    char gender;
    char name[20], address[20], father[20], mother[20], hobby[20], gf[20], exgf[20], g[10], bf[20], exbf[20] , exit;
    cout << "   space is not allowed!  " << endl;
    cout << "Enter your name" << endl;
    cin >> name;

    cout << "Enter your age" << endl;
    cin >> age;

    cout << "Enter your father name" << endl;
    cin >> father;

    cout << "Enter your mother name" << endl;
    cin >> mother;

    cout << "Enter your gender: M for Male | F for female" << endl;
    cin >> gender;

    switch (gender)
    {
    case 'F':
        cout << "Enter your boyfriend name" << endl;
        cin >> bf;
        
        cout << "Enter your EX boyfriend name" << endl;
        cin >> exbf;
        break;

    case 'M':
        cout << "Enter your girlfriend name" << endl;
        cin >> gf;

        cout << "Enter your EX girlfriend name" << endl;
        cin >> exgf;
        break;
    }

    cout << "Enter your hobby" << endl;
    cin >> hobby;

    cout << "Thanks for giving information."<<endl;
    cout<<"Press any key to exit"<<endl;
    cin>>exit;

    return 0;
}