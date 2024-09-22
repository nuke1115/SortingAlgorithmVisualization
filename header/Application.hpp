#ifndef APPLICATION_N_HEADER
#define APPLICATION_N_HEADER
#include "..\header\WindowManager.hpp"
#include "..\header\BarManager.hpp"
#include "..\header\ExecuteManager.hpp"
#include "..\header\ArrayManager.hpp"
#include "..\header\InputManager.hpp"
#include "..\header\Command.hpp"
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <string>
#include <thread>
#include <mutex>
#include <atomic>

class Application
{
private:

    ArrayManager _arrayManager;
    BarManager _barManager;
    WindowManager _windowManager;
    sf::RenderWindow _window;
    InputManager _inputManager;
    ExecuteManager _executeManager;

    volatile std::atomic<bool> _running = true;
    void RenderFunction(sf::RenderWindow& window, BarManager& barManager, volatile std::atomic<bool>& running, std::mutex& windowMutex);
    void ExecuteFunction(BarManager& barManager, ArrayManager& arrayManager, volatile std::atomic<bool>& running);
public:
    Application(int width, int height, std::string name, int baseArrayCount);
    ~Application();
    int Initialize(int baseSize);
    void Run();
};

#endif // !APPLICATION_N_HEADER
