////////////////////////////////////////////////////////////////////////////////
// TODO: Implement `Rectangle` structure and following functions
//
// Your `Rectangle` structure should be able to represent a rectangle in the
// Cartesian coordinate. Assume each side of rectangle is *aligned* with x-axis
// and y-axis. i.e. {(0, 0), (3, 0), (0, 4), (3, 4)} shapes a rectangle, and
// we ignore rectangles like {(0, 0), (1, 2), (2, 1), (3, 3)}.
//
// Here are the list of  functions that you have to implement:
//     - double area(const Rectangle& rect)
//     - void scale(Rectangle& rect, float factor) // lowerleft point is fixed.
//     - void shift(Rectangle& rect, const Point& delta)
// 
// Joint function returns a maximal rectangle that are covered by both rectangles
// and union function returns a minimal rectangle that contains both rectangles.
// If two rectangle has no joint, then return {(0, 0), (0, 0), (0, 0), (0, 0)}.
//     - Rectangle rect_joint(const Rectangle& rect1, const Rectangle& rect2)
//     - Rectangle rect_union(const Rectangle& rect1, const Rectangle& rect2)
//
// We can also think of reflection of rectangles. point_symmetry function takes
// a rectangle and a pointa as inputs and reflects the rectangle along the given
// point. Similarly line_symmetry function takes a rectangle and two point as
// inputs and reflects the rectangle along a line determined by two points.
// You can assume that the line is either parallel to the x-axis or the y-axis.
//     - void point_symmetry(Rectangle& rect, const Point& p)
//     - void line_symmetry(Rectangle& rect, const Point& p1, const Point& p2)
//
// Function prototypes are given in `rectangle.h`. Implement those functionsa
// in `rectangle.cpp`, and write tests in `test_rectangle.cpp`.
//
// (Optional) We can do the similar things with general quadrilaterals. We can
// compute the area, join and union (this is hard, since joint region of two
// quadrilateral can also be triangle, etc.) and so on. You can also implement
// those functions, but first try to write a function that test whether a
// quadrilateral is a rectangle, and if it turns out to be a rectangle, than
// return a Rectangle that is equivalent to the quadrilateral, otherwise return
// {(0, 0), (0, 0), (0, 0), (0, 0)}
//     - bool is_rectangle(cont Quadrilateral& quad)
//     - Rectangle to_rectangle(cont Quadrilateral& quad)
////////////////////////////////////////////////////////////////////////////////

struct Point {
    double x, y;
};

struct Rectangle {
    // Decide which attributes are required to represent a rectangle
};

struct Quadrilateral {
    // upper left, upper right, lower left, lower right
    Point ul, ur, ll, lr;
};

double area(const Rectangle& rect);
void scale(Rectangle& rect, float factor);
void shift(Rectangle& rect, const Point& delta);

Rectangle rect_joint(const Rectangle& rect1, const Rectangle& rect2);
Rectangle rect_union(const Rectangle& rect1, const Rectangle& rect2);

void point_symmetry(Rectangle& rect, const Point& p);
void line_symmetry(Rectangle& rect, const Point& p1, const Point& p2);

////////////////////////////////////////////////////////////////////////////////
// Optional
////////////////////////////////////////////////////////////////////////////////

bool is_rectangle(const Quadrilateral& quad);
Rectangle to_rectangle(const Quadrilateral& quad);
double area(const Quadrilateral& quad);
void scale(const Quadrilateral& quad); // lower left point is fixed
void point_symmetry(Quadrilateral& quad, const Point& p);
void line_symmetry(Quadrilateral& quad, const Point& p1, const Point& p2);
