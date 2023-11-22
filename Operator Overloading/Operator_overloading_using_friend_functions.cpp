#include <iostream>

class Point {
private:
    int x;
    int y;

public:
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}

    // Friend function to overload the + operator
    friend Point operator+(const Point& p1, const Point& p2);

    // Display the point
    void display() const {
        std::cout << "X: " << x << " Y: " << y << std::endl;
    }
};

// Friend function implementation for overloading the + operator
Point operator+(const Point& p1, const Point& p2) {
    return Point(p1.x + p2.x, p1.y + p2.y);
}

int main() {
    Point point1(2, 3);
    Point point2(1, 5);

    // Use the overloaded + operator
    Point result = point1 + point2;

    // Display the result
    std::cout << "Result after addition: ";
    result.display();

    return 0;
}
