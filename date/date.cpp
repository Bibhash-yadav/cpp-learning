#include <iostream>
#include <ctime>
using namespace std;

int main()
{
   int a;
   time_t now = time(0);

   char *date_time = ctime(&now);

   cout << "The current date and time is: " << date_time << endl;
   cout<<"Press any key to exit"<<endl;
   cin>>a;
}