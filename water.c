#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int m = get_int("Minutes: ");
    printf("Bottles: %d\n",12*m);
}
