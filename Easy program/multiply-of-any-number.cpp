#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int j;
    cout << "Enter any number for multiply table" << endl;
    cin >> j;
    cout<<"table  "<<endl;
    do
    {
        cout << j * i << endl;
        i++;
    } while (i <= 10);

    return 0;
}