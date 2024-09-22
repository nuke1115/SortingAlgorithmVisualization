#include "..\InsertionSort.hpp"

void InsertionSort(ArrayManager& arrayManager, BarManager& barManager, int delay)
{
    int* array = arrayManager.getArray();
    for (int i =1; i < arrayManager.getArrayCount(); i++)
    {
        for (int k = i; k > 0; k--)
        {
            barManager.SetColor(k - 1, sf::Color::Red);
            barManager.SetColor(k, sf::Color::Red);
            if (array[k-1] < array[k])
            {
                barManager.SetColor(k - 1, sf::Color::White);
                barManager.SetColor(k, sf::Color::White);
                break;
            }
            
            std::this_thread::sleep_for(std::chrono::nanoseconds(delay));

            barManager.SetColor(k - 1, sf::Color::White);
            barManager.SetColor(k, sf::Color::White);
            barManager.SwapBar(k, k - 1);
            int tmp = array[k];
            array[k] = array[k - 1];
            array[k - 1] = tmp;
        }
    }
}