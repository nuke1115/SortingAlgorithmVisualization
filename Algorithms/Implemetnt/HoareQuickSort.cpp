#include "..\HoareQuickSort.hpp"



void HoareQuickSortFunc(int* array, int left, int right, BarManager& barManager, int delay)
{
    if (right <= left)
    {
        return;
    }
    


    int pivotIndex = (left+right)/2;//for visualization
    int pivotValue = array[pivotIndex];
    int low = left, high = right;

    while (true/*low <= high*/)
    {
        barManager.SetColor(low, sf::Color::Blue);
        barManager.SetColor(high, sf::Color::Red);

        barManager.SetColor(pivotIndex, sf::Color::Green);

        while (array[low] < pivotValue)
        {
            std::this_thread::sleep_for(std::chrono::nanoseconds(delay));
            barManager.SetColor(low, sf::Color::White);
            barManager.SetColor(pivotIndex, sf::Color::Green);
            low++;
            barManager.SetColor(low, sf::Color::Blue);
        }

        while (array[high] > pivotValue)
        {
            std::this_thread::sleep_for(std::chrono::nanoseconds(delay));
            barManager.SetColor(high, sf::Color::White);
            barManager.SetColor(pivotIndex, sf::Color::Green);
            high--;
            barManager.SetColor(high, sf::Color::Red);
        }

        
        std::this_thread::sleep_for(std::chrono::nanoseconds(delay));
        barManager.SetColor(low, sf::Color::White);
        barManager.SetColor(high, sf::Color::White);
        barManager.SetColor(pivotIndex, sf::Color::White);
        if (low < high)
        {
            
            barManager.SwapBar(low, high);
            Swap(array[low], array[high]);

            if (low == pivotIndex)
            {
                pivotIndex = high;
            }
            else if (high == pivotIndex)
            {
                pivotIndex = low;
            }

            low++, high--;
        }
        else
        {
            break;
        }
        
        
    }

    HoareQuickSortFunc(array, left, high,barManager,delay);
    HoareQuickSortFunc(array, high + 1, right,barManager,delay);

}


void HoareQuickSort(ArrayManager& arrayManager, BarManager& barManager, int delay)
{

    HoareQuickSortFunc(arrayManager.getArray(), 0 , arrayManager.getArrayCount() - 1,barManager,delay);

    

}