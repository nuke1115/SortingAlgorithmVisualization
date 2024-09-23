#include "../WindowManager.hpp"

WindowManager::WindowManager()
{
    WindowClearColor = sf::Color::Black;
}

void WindowManager::CreateWindow(sf::RenderWindow& window, int width, int height, const std::string& name)
{
    window.create(sf::VideoMode(width,height),name);
}

void WindowManager::RenderToWindow(sf::RenderWindow& window, const sf::VertexArray& vertexArray)
{
    window.clear();
    window.draw(vertexArray);
    window.display();
}
