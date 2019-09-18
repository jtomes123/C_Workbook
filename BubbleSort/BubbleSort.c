/*
Made by Jakub Tomeš in September, 2019
*/

#include <stdio.h>
#include "../utils.h"

int main()
{
    printf("\nBubble Sort:\n");
    int elements[] = {3, 1, 4, 1, 5, 9, 2};
    unsigned long elementCount = sizeof(elements) / sizeof(elements[0]);

    //Print the unsorted array
    printf("Elements: %lu\n", elementCount);
    printIntArray(elements, 0, elementCount - 1);

    //Sorting algorithm
    while (1)
    {
        int swaps = 0;
        for (int i = 0; i < elementCount - 1; i++)
        {
            if (elements[i] > elements[i + 1])
            {
                swaps = swaps + 1;
                int temp = elements[i];
                elements[i] = elements[i + 1];
                elements[i + 1] = temp;
            }
        }
        if (swaps < 1)
        {
            break;
        }
    }

    // Print the sorted array
    printIntArray(elements, 0, elementCount - 1);
    return 0;
}

