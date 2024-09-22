#include "../InputManager.hpp"

void InputManager::GetCommand(Command& command,volatile std::atomic<bool>& running)
{
    command.command = "null";
    command.strArg = "null";
    command.intArg = -1;

    if (running)
    {
        std::cin >> command.command;

        if (running)
        {
            if (!command.command.compare("SetSize"))
            {
                

                while (command.intArg < 1 || command.intArg > 65536)
                {
                    std::cout << "Enter Array Size (1 <= size <= 65,536): ";
                    std::cin >> command.intArg;
                }
            }
            else if (!command.command.compare("Delay"))
            {
                

                while (command.intArg < 0)
                {
                    std::cout << "Enter Delay Time (size >= 0) .ns: ";
                    std::cin >> command.intArg;
                }
            }
            else if (!command.command.compare("Duplication"))
            {
                std::cout << "Enter On or Off (On / Off): ";

                std::cin >> command.strArg;
            }
            else if (!command.command.compare("Sort"))
            {
                std::cout << "Enter Sorting Algorithm's name which you want to execute/n";

                std::cin >> command.strArg;
            }
            
        }

    }

}
