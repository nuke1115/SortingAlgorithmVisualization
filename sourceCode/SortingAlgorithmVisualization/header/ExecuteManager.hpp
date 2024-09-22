#ifndef EXECUTE_MANAGER_N_HEADER
#define EXECUTE_MANAGER_N_HEADER
#include <atomic>
#include "..\header\BarManager.hpp"
#include "..\header\ArrayManager.hpp"
#include "..\header\Command.hpp"
#include "..\header\SortingAlgorithmManager.hpp"

class ExecuteManager
{
private:
    SortingAlgorithmManager _sortingAlogrithmManager;
public:
    void ExecuteCommand(Command& command, BarManager& barManager, ArrayManager& arrayManager, volatile std::atomic<bool>& running);
};

#endif // !EXECUTE_MANAGER_N_HEADER
