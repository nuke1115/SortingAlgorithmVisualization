#ifndef INPUT_MANAGER_N_HEADER
#define INPUT_MANAGER_N_HEADER

#include <iostream>
#include <atomic>
#include "../header/Command.hpp"

class InputManager
{
public:
    void GetCommand(Command& command ,volatile std::atomic<bool>& running);
};

#endif // !INPUT_N_HEADER
