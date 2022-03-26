#include <iostream>
using namespace std;

class Box
{
private:
   double length;  // Length of a box

public:
   void setLength(double len)
   {
      length = len;
   }
   double getlength(void)
   {
      return length;
   }

   // Overload + operator to add two Box objects.
   Box operator*(const Box &box2)
   {
      Box box1;
      box1.length = this->length * box2.length;
      return box1;
   }
};


// Main function for the program
int main()
{
   Box Box1;            
   Box Box2;

   Box1.setLength(6.0);
   Box2.setLength(12.0);

   Box Box3;
   Box3 = Box1 * Box2;

   // cout << Box3.getlength()
   
   return 0;
}