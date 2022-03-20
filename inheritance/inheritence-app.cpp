#include <iostream>

using namespace std;

// Parent class
class Shape
{

protected:
    int width;
    int height;

public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
};


// Child class
class Rectangle : public Shape
{
// private:
//     int length;

public:
    int getArea()
    {
        return (width * height);
    }

    // int getVolume()
    // {
    //     return (width * height * length);
    // }

    // int setLength(int l)
    // {
    //     length = l;
    // }
};

int main(void)
{
    Rectangle Rect;

    Rect.setWidth(5);
    Rect.setHeight(7);
    // Rect.setLength(10);

    // Print the area of the object.
    cout << "Rect area: " << Rect.getArea() << endl;
    // cout << "Rect Volume: " << Rect.getVolume() << endl;

    return 0;
}



/**
 * @brief
 * father -> child
 * inheritence -> can acess parent property
 */