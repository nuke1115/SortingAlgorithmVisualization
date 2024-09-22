#ifndef MERGE_SORT_N_HEADER
#define MERGE_SORT_N_HEADER

#include "..\header\ArrayManager.hpp"
#include "..\header\BarManager.hpp"
#include <SFML/Graphics/Color.hpp>
#include <thread>
#include <chrono>

    
void MergeSortFunc(int* array, int size, BarManager& barManager, int delay, int startIndex);

void MergeSort(ArrayManager& arrayManager, BarManager& barManager, int delay);

#endif // !MERGE_SORT_N_HEADER
