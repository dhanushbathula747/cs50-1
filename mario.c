#include<stdio.h>
#include<cs50.h>
int main(void)
{

int s = get_int("Height: ");
for (int i = 1; i <= s; i++)
{
    for (int k=0; k < s-i; k++)
    {
        printf("%s", " ");
    }
    for(int j = 0; j < i; j++)
    {
        printf("#");
    }
    printf("\n");
}
}

