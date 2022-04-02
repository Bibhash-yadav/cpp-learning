#include<iostream>
#include<string>
#include <iomanip>
using namespace std;
int main(){
    int a;
    long int b;
    char c;
    float f;
    double d;
    cout<<"Enter Intger type value"<<endl;
    cin>>a;
    cout<<"Enter long intger type value"<<endl;
    cin >>b; 
    cout<<"Enter char type value"<<endl;
    cin>>c;
    cout<<"Enter float type value"<<endl;
    cout << fixed << showpoint;
    cout << setprecision(3);
    cin >>f;
    cout<<"Enter double type value"<<endl;
    cout << fixed << showpoint;
    cout << setprecision(9);
    cin>>d ;
    return 0;
}
/*
Print each element on a new line in the same order it was received as input.
 Note that the floating point value should be correct up to 3 decimal places and 
 the double to 9 decimal places.
 */
