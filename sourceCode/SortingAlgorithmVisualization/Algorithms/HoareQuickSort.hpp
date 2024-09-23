#ifndef HOARE_QUICK_SORT_N_HEADER
#define HOARE_QUICK_SORT_N_HEADER

#include "../header/ArrayManager.hpp"
#include "../header/BarManager.hpp"
#include <SFML/Graphics/Color.hpp>
#include <thread>
#include <chrono>
inline void Swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void HoareQuickSortFunc(int* array, int left, int right, BarManager& barManager, int delay);

void HoareQuickSort(ArrayManager& arrayManager, BarManager& barManager, int delay);

#endif // !HOARE_QUICK_SORT_N_HEADER
