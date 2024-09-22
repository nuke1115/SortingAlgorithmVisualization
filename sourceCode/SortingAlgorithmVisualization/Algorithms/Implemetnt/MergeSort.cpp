#include "../MergeSort.hpp"

void MergeSortFunc(int* array, int size, BarManager& barManager, int delay, int startIndex)
{
    if (size <= 1)
    {
        return;
    }

    //분할
    int middle = size / 2;
    int leftSize = middle, rightSize = size - middle;

    int* left = new int[leftSize];
    int* right = new int[rightSize];

    for (int i = 0; i < leftSize; i++)
    {
        left[i] = array[i];
    }

    for (int i = 0; i < rightSize; i++)
    {
        right[i] = array[i + middle];
    }

    

    MergeSortFunc(left, leftSize, barManager, delay, startIndex);
    MergeSortFunc(right, rightSize, barManager, delay, startIndex + leftSize);

    //합치기
    for (int i = 0, leftIndex = 0, rightIndex = 0; i < size; i++)
    {
        if (leftIndex < leftSize && rightIndex < rightSize)
        {
            if (left[leftIndex] <= right[rightIndex])
            {
                array[i] = left[leftIndex];
                leftIndex++;
            }
            else
            {
                array[i] = right[rightIndex];
                rightIndex++;
            }

        }
        else if (leftIndex < leftSize)
        {
            array[i] = left[leftIndex];
            leftIndex++;
        }
        else if (rightIndex < rightSize)
        {
            array[i] = right[rightIndex];
            rightIndex++;
        }
        std::this_thread::sleep_for(std::chrono::nanoseconds(delay));
        barManager.SetBarHeight(startIndex + i, array[i]);
    }


    delete[] left;
    delete[] right;
}

void MergeSort(ArrayManager& arrayManager, BarManager& barManager, int delay)
{
    MergeSortFunc(arrayManager.getArray(), arrayManager.getArrayCount(), barManager, delay,0);
}
