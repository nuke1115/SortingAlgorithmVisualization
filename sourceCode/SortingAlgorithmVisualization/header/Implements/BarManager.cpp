#include "../BarManager.hpp"

void BarManager::CreateBars(int elementCount, int elementArray[])
{

    _barWidth = _screenWidth / elementCount;
    _barHeightBase = _screenHeight / elementCount;
    for (int i = 0; i < elementCount; i++)
    {
        float barHeightUpper = _screenHeight - (_barHeightBase * elementArray[i]);
        float barLeftCoord = i * _barWidth, barRightCoord = (i+1)*_barWidth;

        _vertexArray[i*_vertexCount].position = sf::Vector2f(barLeftCoord , barHeightUpper);
        _vertexArray[i * _vertexCount+1].position = sf::Vector2f(barRightCoord, barHeightUpper);
        _vertexArray[i * _vertexCount+2].position = sf::Vector2f(barRightCoord, _screenHeight);

        _vertexArray[i * _vertexCount+3].position = sf::Vector2f(barLeftCoord, barHeightUpper);
        _vertexArray[i * _vertexCount+4].position = sf::Vector2f(barRightCoord, _screenHeight);
        _vertexArray[i * _vertexCount+5].position = sf::Vector2f(barLeftCoord, _screenHeight);

    }
}

void BarManager::Initialize(int screenWidth, int screenHeight, int elementCount)
{
    _screenWidth = static_cast<float>(screenWidth);
    _screenHeight = static_cast<float>(screenHeight);
    _vertexArray.resize(elementCount * _vertexCount);
    _vertexArray.setPrimitiveType(sf::PrimitiveType::Triangles);
}

void BarManager::ResetArrayValues(ArrayManager& arrayManager)
{
    CreateBars(arrayManager.getArrayCount(), arrayManager.getArray());
}

void BarManager::Recreate(ArrayManager& arrayManager)
{
    _vertexArray.clear();
    _vertexArray.resize(arrayManager.getArrayCount()*_vertexCount);
    CreateBars(arrayManager.getArrayCount(), arrayManager.getArray());
}

void BarManager::SetColor(int index, const sf::Color& color)
{
    for (int i = 0; i < _vertexCount; i++)
    {
        _vertexArray[index * _vertexCount+i].color = color;
    }
}

void BarManager::SwapBar(int index1, int index2)
{
    
    for (int i = 0; i < _vertexCount; i++)
    {
        Swap(_vertexArray[index1 * _vertexCount + i], _vertexArray[index2 * _vertexCount + i]);
    }
}

void BarManager::SetBarHeight(int indexPos, int value)
{
    float barHeightUpper = _screenHeight - (_barHeightBase * value);
    float barLeftCoord = indexPos * _barWidth, barRightCoord = (indexPos + 1) * _barWidth;
    _vertexArray[indexPos * _vertexCount].position = sf::Vector2f(barLeftCoord, barHeightUpper);
    _vertexArray[indexPos * _vertexCount + 1].position = sf::Vector2f(barRightCoord, barHeightUpper);
    _vertexArray[indexPos * _vertexCount + 2].position = sf::Vector2f(barRightCoord, _screenHeight);

    _vertexArray[indexPos * _vertexCount + 3].position = sf::Vector2f(barLeftCoord, barHeightUpper);
    _vertexArray[indexPos * _vertexCount + 4].position = sf::Vector2f(barRightCoord, _screenHeight);
    _vertexArray[indexPos * _vertexCount + 5].position = sf::Vector2f(barLeftCoord, _screenHeight);
}
