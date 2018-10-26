#include <iostream>
#include <string>
#include <cmath>

struct Point {
    double x, y;
};

double dist(const Point& p1, const Point& p2) {
    return std::sqrt(std::pow(p1.x - p2.x, 2.0) + std::pow(p1.y - p2.y, 2.0));
}

double norm(const Point& p) {
    return std::sqrt(std::pow(p.x, 2.0) + std::pow(p.y, 2.0));
}

void wrong_shift(Point p, const Point& dp) {
    p.x += dp.x; p.y = dp.y;
}

void shift(Point& p, const Point& dp) {
    p.x += dp.x; p.y += dp.y;
}

struct Circle {
    Point c;
    double r;
};

double area(const Circle& circ) {
    return std::pow(circ.r, 2.0);
}

int main()
{
    // Define array (the size of an array should be known)
    int arr[] = { 1, 2, 3, 4, 5 };
    std::cout << sizeof(arr) << "\n";

    // Or equivalently 
    // ```
    // for (auto i : arr) {
    //     std::cout << i << " "; 
    // }
    // ```
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    // Update contents of an array. Note that array index starts from 0
    arr[1] = 4;
    arr[3] = 2;

    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    Point origin = { 0.0, 0.0 };
    Point p1 = { 3.0, 4.0 };
    Point delta = { 0.01, 0.01 };
    Circle circ = { origin, 3.0 }; // Or equivalently `Circle c = { .c = origin, .r = 3.0}`

    std::cout << "p1: (" << p1.x << ", " << p1.y << ")\n";
    wrong_shift(p1, delta);
    std::cout << "p1: (" << p1.x << ", " << p1.y << ")\n";
    shift(p1, delta);
    std::cout << "p1: (" << p1.x << ", " << p1.y << ")\n\n";

    std::cout << "area(c): " << area(circ) << "\n";
}