#include<iostream>
#include<math.h>
 
using namespace std;
 
int main()
{
    float p,r,t,cp,ci;	
	cout<<" Input the Principle = ";
	cin>>p;
	cout<<" Input the Rate = ";
	cin>>r;
	cout<<" Input the Time =  ";
	cin>>t;	
    ci=p*pow((1+r/100),t)-p;	
    cp=p*pow((1+r/100),t);
    cout<<endl;
    cout<<" Compound Intrest = "<<ci;    
    cout << endl; 
	cout<<" compounded amount =  "<<cp;    
    cout << endl; 
    return 0;
}
