#include <iostream>

int stack_doctor()
{
    int x = 3;
    int y = 4;
    double z = 5.0;
    std::cout << "New stack allocated around: " << &x << "\n";
    std::cout << "Address of y: " << &y << "\n"
              << "Address of z: " << &z << "\n";
}

int call_by_value(int x)
{
    int *xp = &x;
    std::cout << "Call-by-reference argument at: " << xp << "\n";
} 

int call_by_reference(int& x)
{
    int *xp = &x;
    std::cout << "Call-by-value argument at: " << xp << "\n";
}

int main()
{
    int x = 3;
    int& y = x;
    std::cout << "Address of x: " << &x << "\n"
              << "Address of y: " << &y << "\n";
    call_by_reference(x);
    call_by_value(x);
    call_by_reference(y);
    call_by_value(y);
    stack_doctor();
}
