#ifndef BAR_MANAGER_N_HEADER
#define BAR_MANAGER_N_HEADER
#include <SFML/Graphics/VertexArray.hpp>
#include <SFML/Graphics/Color.hpp>
#include "..\header\ArrayManager.hpp"


class BarManager
{
private:
    sf::VertexArray _vertexArray;
    float _screenWidth;
    float _screenHeight;
    float _barWidth;
    float _barHeightBase;

    inline void Swap(sf::Vertex& vertex1, sf::Vertex& vertex2)
    {
        float tmp;
        sf::Color colorTmp;

        colorTmp = vertex1.color;
        vertex1.color = vertex2.color;
        vertex2.color = colorTmp;

        tmp = vertex1.position.y;
        vertex1.position.y = vertex2.position.y;
        vertex2.position.y = tmp;
    }

    const int _vertexCount = 6;
public:
    void Initialize(int screenWidth, int screenHeight, int elementCount = 4);

    void ResetArrayValues(ArrayManager& arrayManager);
    void CreateBars(int elementCount, int elementArray[]);
    void Recreate(ArrayManager& arrayManager);

    void SetColor(int index, const sf::Color& color);
    void SwapBar(int index1, int index2);
    void SetBarPos(int indexPos, int value);


    inline sf::VertexArray* GetVertexArrayPointer()
    {
        return &_vertexArray;
    }
};

#endif // !BAR_MANAGER_N_HEADER