#include "../ArrayManager.hpp"

ArrayManager::~ArrayManager()
{
    if (_array != nullptr)
    {
        delete[] _array;
    }
}

void ArrayManager::ResetArrayElements()
{
    if (_duplicate)
    {
        resetWithDuplicate();
    }
    else
    {
        resetWithOutDuplicate();
    }
}

void ArrayManager::resetWithDuplicate()
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(1, _arrayCount);

    for (int i = 0; i < _arrayCount-1; i++)
    {
        _array[i] = dist(mt);
    }
}

void ArrayManager::resetWithOutDuplicate()
{

    for (int i = 0; i < _arrayCount; i++)
    {
        _array[i] = i+1;
    }
}

void ArrayManager::resize(int size)
{
    int* tmp = new int[size];
    
    if (_array != nullptr)
    {
        delete[] _array;
    }

    _array = tmp;

    if (_array != nullptr)
    {
        SetArrayCount(size);
        if (_duplicate)
        {
            resizeWithDuplicate(size);
        }
        else
        {
            resizeWithOutDuplicate(size);
        }
    }
}

void ArrayManager::resizeWithDuplicate(int size)
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(1, size);

    for (int i = 0; i < size; i++)
    {
        _array[i] = dist(mt);
    }
}

void ArrayManager::resizeWithOutDuplicate(int size)
{
    for (int i = 0; i < size; i++)
    {
        _array[i] = i + 1;
    }
}

void ArrayManager::createArray(int size)
{
    _array = new int[size];

    if (_array != nullptr)
    {
        for (int i = 0; i < size; i++)
        {
            _array[i] = i + 1;
        }
    }
}
