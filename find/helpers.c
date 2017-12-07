  /**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int min = 0, max = (n - 1), mid = ((max + min) / 2);
while (min <= max)
{
    if (values[mid] == value)
        return true;
    else if (values[mid] > value)
    {
        max = (mid - 1);
        mid = ((max + min) / 2);
    }
    else if (values[mid] < value)
    {
        min = (mid + 1);
        mid = ((max + min) / 2);
    }
    else
    {
        return false;
    }
}
return false;

    }



    // TODO: implement a searching algorithm



/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{

    // TODO: implement a sorting algorithm
    for (int i=0; i<n; i++)
    {
        int key = values[i];
        int j = i - 1;
        while (j>=0 && values[j] > key)
        {
            values[j+1] = values[j];
            j = j-1;
        }
        values[j+1] = key;

    }

    return;
}
