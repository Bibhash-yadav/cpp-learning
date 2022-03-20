#include<iostream>
using namespace std;

int main(){
float a,b,d;
char op;
int anyKey;

cout<<" Enter number and operation "<<endl;
cin>>a>>op>>b;

switch (op)
{
case '+':
cout<<"= "<<a+b;
    break;
case '-':
cout<<"= "<<a-b;
break;
case '*':
cout<<"= "<<a*b;
    break;
case '/':
cout<<"= "<<a/b;
break;
case '%':
d=a*(b/100);
cout<<a-d;
break;

default:
cout<<"Given operation is not recoinezed";
    break;
}

cout<<" Press any key to exit "<<endl;
cin>>anyKey;
return 0;
}
