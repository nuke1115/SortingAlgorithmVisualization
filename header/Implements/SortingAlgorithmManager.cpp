#include "..\SortingAlgorithmManager.hpp"

void SortingAlgorithmManager::Shuffle(BarManager& barManager, ArrayManager& arrayManager)
{
    FisherYates(arrayManager, barManager, _delayTime);
}

void SortingAlgorithmManager::Sort(std::string& sortingAlgorithmNumber, BarManager& barManager, ArrayManager& arrayManager)
{
    if (!sortingAlgorithmNumber.compare("BubbleSort"))
    {
        BubbleSort(arrayManager,barManager,_delayTime);
    }
    else if (!sortingAlgorithmNumber.compare("SelectionSort"))
    {
        SelectionSort(arrayManager,barManager,_delayTime);
    }
    else if (!sortingAlgorithmNumber.compare("InsertionSort"))
    {
        InsertionSort(arrayManager,barManager,_delayTime);
    }
    else if (!sortingAlgorithmNumber.compare("HoareQuickSort"))
    {
        HoareQuickSort(arrayManager,barManager,_delayTime);
    }
    else if (!sortingAlgorithmNumber.compare("MergeSort"))
    {
        MergeSort(arrayManager,barManager,_delayTime);
    }
}