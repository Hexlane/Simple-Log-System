#include <iostream>
#include "log.hpp"

int main()
{
    base::g_log.attach();
    base::g_log.send("Test", "This is a test log message");


    std::cout << "Press Enter to exit..." << std::endl;
    std::cin.get();
}
