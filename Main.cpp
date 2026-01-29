#include <iostream>
#include "log.hpp"

int main()
{
    Logger::Instance()->Initialize();
    Logger::Instance()->Log("Hello World! \n");
    std::cout << "Press Enter to exit..." << std::endl;
    std::cin.get();
}


