#include "../FisherYatesShuffle.hpp"

void FisherYates(ArrayManager& arrayManager, BarManager& barManager, int delay)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(0, arrayManager.getArrayCount() - 1);

    for (int i = 0; i < arrayManager.getArrayCount(); i++)
    {
        int randNum = dist(mt);
        barManager.SetColor(i, sf::Color::Red);
        barManager.SetColor(randNum, sf::Color::Red);
        int tmp = arrayManager.getArray()[randNum];
        arrayManager.getArray()[randNum] = arrayManager.getArray()[i];
        arrayManager.getArray()[i] = tmp;
        barManager.SwapBar(i, randNum);
        barManager.SetColor(i, sf::Color::White);
        barManager.SetColor(randNum, sf::Color::White);
        if (delay > 0)
        {
            std::this_thread::sleep_for(std::chrono::nanoseconds(delay));
        }
    }
}
