#ifndef UTILS
#define UTILS
/***
* Prints array element from start to the end (<=)
***/
void printIntArray(int elements[], unsigned long start, unsigned long end)
{
    unsigned long elementCount = sizeof(&elements) / sizeof(elements[0]);
    printf("{\n");
    for (int i = start; i <= end; i++)
    {
        printf("\t%d\n", elements[i]);
    }
    printf("}\n");
}
/***
* Prints array elements
***/
void printIntArray(int elements[])
{
    unsigned long elementCount = sizeof(&elements) / sizeof(elements[0]);
    printf("{\n");
    for (int i = 0; i < elementCount; i++)
    {
        printf("\t%d\n", elements[i]);
    }
    printf("}\n");
}
#endif