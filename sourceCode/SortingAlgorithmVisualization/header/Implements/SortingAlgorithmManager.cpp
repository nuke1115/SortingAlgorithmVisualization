#include "../SortingAlgorithmManager.hpp"

void SortingAlgorithmManager::Shuffle(BarManager& barManager, ArrayManager& arrayManager)
{
    FisherYates(arrayManager, barManager, _delayTime);
}

void SortingAlgorithmManager::Sort(std::string& sortingAlgorithmName, BarManager& barManager, ArrayManager& arrayManager)
{
    if (!sortingAlgorithmName.compare("BubbleSort"))
    {
        BubbleSort(arrayManager,barManager,_delayTime);
    }
    else if (!sortingAlgorithmName.compare("SelectionSort"))
    {
        SelectionSort(arrayManager,barManager,_delayTime);
    }
    else if (!sortingAlgorithmName.compare("InsertionSort"))
    {
        InsertionSort(arrayManager,barManager,_delayTime);
    }
    else if (!sortingAlgorithmName.compare("HoareQuickSort"))
    {
        HoareQuickSort(arrayManager,barManager,_delayTime);
    }
    else if (!sortingAlgorithmName.compare("MergeSort"))
    {
        MergeSort(arrayManager,barManager,_delayTime);
    }
}
