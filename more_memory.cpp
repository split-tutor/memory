#include <iostream>
#include <iomanip> // pretty output formats
#include <string>

#include "more_memory.h"

int main()
{
    // Allocate a message in the stack
    Message m = {
        "Alice",
        "Bob",
        "This is an urgent message!",
        M_ADMIN | M_ALERT,
    };

    std::cout << std::setw(12) << "&m" << std::setw(16) <<&m << "\n"
              << std::setw(12) << "&(m.send)" << std::setw(16) << &(m.send) << "\n"
              << std::setw(12) << "&(m.recv)" << std::setw(16) << &(m.recv) << "\n"
              << std::setw(12) << "&(m.buf)" << std::setw(16) << &(m.buf) << "\n"
              << std::setw(12) << "&(m.flag)" << std::setw(16) << &(m.flag) << "\n";

    std::cout << "sizeof(Message) = " << sizeof(Message) << "\n";

    // Allocate a payload in the stack
    Payload p = {
        "awesome header",
        m,
        "pretty footer"
    };

    std::cout << std::setw(12) << "&p" << std::setw(16) <<&m << "\n"
              << std::setw(12) << "&(p.header)" << std::setw(16) << &(p.header) << "\n"
              << std::setw(12) << "&(p.m)" << std::setw(16) << &(p.m) << "\n"
              << std::setw(12) << "&(p.footer)" << std::setw(16) << &(p.footer) << "\n";

    std::cout << "sizeof(Payload) = " << sizeof(Payload) << "\n";
}