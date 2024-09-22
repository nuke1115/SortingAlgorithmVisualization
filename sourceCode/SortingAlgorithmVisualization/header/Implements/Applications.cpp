#include "../Application.hpp"

Application::Application(int width, int height, std::string name, int baseArrayCount)
{
    _arrayManager.SetArrayCount(baseArrayCount);
    _arrayManager.createArray(baseArrayCount);
    _barManager.Initialize(width, height,baseArrayCount);
    _windowManager.CreateWindow(_window, width, height, name);
}

Application::~Application()
{
    
}


void Application::RenderFunction(sf::RenderWindow& window, BarManager& barManager, volatile std::atomic<bool>& running, std::mutex& windowMutex)//volatile 은 항상 최신상태로 유지한다 변수를. 그러면 비용도 더 많이 드나?
{
    while (running)
    {
        windowMutex.lock();
        window.setActive(true);

        window.clear();
        window.draw(*(barManager.GetVertexArrayPointer()));
        window.display();

        window.setActive(false);
        windowMutex.unlock();
        std::this_thread::sleep_for(std::chrono::milliseconds(2));

    }
}

void Application::ExecuteFunction(BarManager& barManager, ArrayManager& arrayManager,volatile std::atomic<bool>& running)
{
    Command commandArgs;
    while (running)
    {
        _inputManager.GetCommand(commandArgs, running);
        _executeManager.ExecuteCommand(commandArgs, barManager, arrayManager,running);
    }
}

void Application::Run()
{
    _window.setActive(false);
    std::mutex windowMtx;
    
    
    std::jthread renderThread(&Application::RenderFunction, this, std::ref(_window), std::ref(_barManager), std::ref(_running), std::ref(windowMtx));
    std::jthread executingThread(&Application::ExecuteFunction, this, std::ref(_barManager), std::ref(_arrayManager), std::ref(_running));

    while (_running)
    {
        windowMtx.lock();
        sf::Event event;
        while (_window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                _window.close();
                _running = false;
            }
        }

        windowMtx.unlock();
        std::this_thread::sleep_for(std::chrono::milliseconds(4));

    }

}

int Application::Initialize(int baseSize)
{
    _barManager.CreateBars(_arrayManager.getArrayCount(), _arrayManager.getArray());
    return 0;
}
