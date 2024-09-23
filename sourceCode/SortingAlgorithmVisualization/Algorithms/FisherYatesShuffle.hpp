#ifndef FISHER_YATES_N_HEADER
#define FISHER_YATES_N_HEADER
#include <random>
#include <SFML/Graphics/Color.hpp>
#include <thread>
#include <chrono>
#include "../header/ArrayManager.hpp"
#include "../header/BarManager.hpp"

void FisherYates(ArrayManager& arrayManager, BarManager& barManager, int delay);

#endif // !FISHER_YATES_N_HEADER
