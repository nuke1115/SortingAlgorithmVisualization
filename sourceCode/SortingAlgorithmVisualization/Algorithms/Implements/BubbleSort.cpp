#include "../BubbleSort.hpp"

void BubbleSort(ArrayManager& arrayManager, BarManager& barManager, int delay)
{
    int* array = arrayManager.getArray();
    for (int i = 0; i < arrayManager.getArrayCount(); i++)
    {
        for (int k = 0; k < arrayManager.getArrayCount() - 1; k++)
        {
            barManager.SetColor(k, sf::Color::Red);
            barManager.SetColor(k + 1, sf::Color::Red);

            if (array[k] > array[k + 1])
            {
                int tmp = array[k];
                array[k] = array[k + 1];
                array[k + 1] = tmp;
                barManager.SwapBar(k, k + 1);
            }

            
            
            std::this_thread::sleep_for(std::chrono::nanoseconds(delay));
            barManager.SetColor(k, sf::Color::White);
            barManager.SetColor(k + 1, sf::Color::White);
        }
    }
}
