#include "..\SelectionSort.hpp"

void SelectionSort(ArrayManager& arrayManager, BarManager& barManager, int delay)
{
    int* array = arrayManager.getArray();

    for (int i = 0; i < arrayManager.getArrayCount() - 1; i++)
    {
        int lowestIndex = i;
        

        for (int k = lowestIndex; k < arrayManager.getArrayCount(); k++)
        {
            if (k != i)
            {
                barManager.SetColor(k, sf::Color::Red);
            }

            if (array[k] < array[lowestIndex])
            {
                
                if (lowestIndex != i)
                {
                    barManager.SetColor(lowestIndex,sf::Color::White);
                }

                lowestIndex = k;
            }
            
            barManager.SetColor(lowestIndex, sf::Color::Green);
            barManager.SetColor(i, sf::Color::Blue);
            std::this_thread::sleep_for(std::chrono::nanoseconds(delay));
            if (k != i)
            {
                barManager.SetColor(k, sf::Color::White);
            }
            

        }
        barManager.SetColor(lowestIndex, sf::Color::White);
        barManager.SetColor(i, sf::Color::White);
        barManager.SwapBar(i, lowestIndex);
        int tmp = array[lowestIndex];
        array[lowestIndex] = array[i];
        array[i] = tmp;

        
    }

}