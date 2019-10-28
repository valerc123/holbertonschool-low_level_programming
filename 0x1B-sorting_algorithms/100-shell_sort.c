#include "sort.h"
/*
 * shell_sort - sorts an array of integers in
 * ascending order using the Shell sort algorithm
 * using the Knuth sequence
 * @array: array to sort
 * @size: size of array
*/
void shell_sort(int *array, size_t size)
{
    unsigned int i, j, gap;
    int tmp;

    for (gap = size/2; gap > 0; gap /=2)
    {
        for (i = gap; i < size; i += 1)
        {
            tmp = array[i];
            for (j = i; (j >= gap) && (array[j - gap] > tmp); j -= gap)
            {
                array[j] = array[j - gap];
            }
            array[j] = tmp;
        }
    }
}