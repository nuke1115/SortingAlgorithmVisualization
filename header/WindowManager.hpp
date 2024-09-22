#ifndef WINDOW_MANAGER_N_HEADER
#define WINDOW_MANAGER_N_HEADER
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/VertexArray.hpp>
#include <SFML/Graphics/Color.hpp>
#include <string>

class WindowManager
{
private:
    sf::Color WindowClearColor;
public:
    WindowManager();
    void CreateWindow(sf::RenderWindow& window, int width, int height, const std::string& name);
    void RenderToWindow(sf::RenderWindow& window, const sf::VertexArray& vertexArray);
    

};

#endif // !WINDOW_MANAGER_N_HEADER