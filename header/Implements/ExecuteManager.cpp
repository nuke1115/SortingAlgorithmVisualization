#include "..\ExecuteManager.hpp"

void ExecuteManager::ExecuteCommand(Command& command, BarManager& barManager, ArrayManager& arrayManager, volatile std::atomic<bool>& running)
{
    if (!command.command.compare("Shuffle"))
    {
        _sortingAlogrithmManager.Shuffle(barManager,arrayManager);
    }
    else if (!command.command.compare("Delay"))
    {
        _sortingAlogrithmManager.SetDelayTime(command.intArg);
    }
    else if (!command.command.compare("Reset"))
    {
        arrayManager.ResetArrayElements();
        barManager.ResetArrayValues(arrayManager);
    }
    else if (!command.command.compare("Duplication"))
    {
        bool isDuplicationOn = !command.strArg.compare("On");
        arrayManager.setDuplicate(isDuplicationOn);
    }
    else if (!command.command.compare("SetSize"))
    {
        arrayManager.resize(command.intArg);
        barManager.Recreate(arrayManager);
    }
    else if (!command.command.compare("Sort"))
    {
        _sortingAlogrithmManager.Sort(command.strArg, barManager, arrayManager);
    }
    else if (!command.command.compare("Exit"))
    {
        running = false;
    }
}