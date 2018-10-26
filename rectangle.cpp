#include "rectangle.h"

double area(const Rectangle& rect) { return 0.0; }
void scale(Rectangle& rect, float factor) { return; }
void shift(Rectangle& rect, const Point& delta) { return; }

Rectangle rect_joint(const Rectangle& rect1, const Rectangle& rect2) { return Rectangle{}; }
Rectangle rect_union(const Rectangle& rect1, const Rectangle& rect2) { return Rectangle{}; }

void point_symmetry(Rectangle& rect, const Point& p) { return; }
void line_symmetry(Rectangle& rect, const Point& p1, const Point& p2) { return; }

bool is_rectangle(const Quadrilateral& quad) { return false; }
Rectangle to_rectangle(const Quadrilateral& quad) { return Rectangle{}; }
double area(const Quadrilateral& quad) { return 0.0; }
void sclae(const Quadrilateral& quad) { return; }
void point_symmetry(Quadrilateral& quad, const Point& p) { return; }
void line_symmetry(Quadrilateral& quad, const Point& p1, const Point& p2) { return; }