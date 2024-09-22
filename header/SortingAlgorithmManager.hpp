#ifndef SORTING_ALGORITHM_MANAGER_N_HEADER
#define SORTING_ALGORITHM_MANAGER_N_HEADER
#include "..\header\BarManager.hpp"
#include "..\header\ArrayManager.hpp"
#include "..\Algorithms\FisherYatesShuffle.hpp"
#include "..\Algorithms\BubbleSort.hpp"
#include "..\Algorithms\SelectionSort.hpp"
#include "..\Algorithms\InsertionSort.hpp"
#include "..\Algorithms\HoareQuickSort.hpp"
#include "..\Algorithms\MergeSort.hpp"
#include <string>

class SortingAlgorithmManager
{
private:
    int _delayTime = 0;
public:
    inline void SetDelayTime(int time)
    {
        _delayTime = time;
    }

    void Shuffle(BarManager& barManager, ArrayManager& arrayManager);
    void Sort(std::string& sortingAlgorithmNumber,BarManager& barManager, ArrayManager& arrayManager);
};

#endif // !SORTING_ALGORITHM_MANAGER_N_HEADER
