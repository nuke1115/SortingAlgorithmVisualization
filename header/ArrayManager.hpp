#ifndef ARRAY_MANAGER_N_HEADER
#define ARRAY_MANAGER_N_HEADER
#include <random>

class ArrayManager
{
private:
    int* _array = nullptr;
    int _arrayCount = 0;
    void resizeWithDuplicate(int size);
    void resizeWithOutDuplicate(int size);
    void resetWithDuplicate();
    void resetWithOutDuplicate();
    bool _duplicate = false;
public:

    void ResetArrayElements();

    inline int* getArray()
    {
        return _array;
    }

    inline void SetArrayCount(int count)
    {
        _arrayCount = count;
    }

    inline int getArrayCount() const
    {
        return _arrayCount;
    }

    inline void setDuplicate(bool duplication)
    {
        _duplicate = duplication;
    }

    void createArray(int size);

    void resize(int size);

    ~ArrayManager();
};

#endif // !ARRAY_MANAGER_N_HEADER
