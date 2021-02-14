
#include <iostream>

class Point {
private:
    int _x;
    int _y;

public:
    // default constructor
    Point() : _x(0), _y(0) {}
    
    // constructor takes 2 arguments, x and y
    Point(int x, int y) : _x(x), _y(y) {}

    // behaviors
    void move_to(int x, int y)
    {
        _x = x;
        _y = y;
    }

    // operator overloading

    // add 2 points
    Point operator+(const Point& other)
    {
        return Point(_x + other._x, _y + other._y);
    }

    // overload stream operator
    friend std::ostream& operator<<(std::ostream& os, const Point& point)
    {
        os << "Point(" << point._x << ", " << point._y << ")";
        return os;
    }

};


int main(int argc, char ** argv)
{
    Point a(2,4);
    Point b(3,6);
    Point c = a + b;

    std::cout << a << " + " << b << " = " << c << std::endl;

    return 0;
}

/*
Output

wwestlake@worker01:~/devel/quora$ ./class_example 
Point(2, 4) + Point(3, 6) = Point(5, 10)
wwestlake@worker01:~/devel/quora$ 
*/
