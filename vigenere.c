#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, string argv[])
{
    if(argc == 2)
    {
        string s = get_string("plain text:");
        printf("ciphertext: ");
        for(int i=0,n = strlen(argv[1]); i < n; i++)
        {
            int k = atoi(argv[1][i]);


        if(k>=26)
        {
            int a = k/26;
            k = k- (a*26);

        }


        for(int i=0,n = strlen(s);i < n; i++)
        {
            int c = (int)s[i];
            printf("%c", c + k );
        }

    }
    }
    else if(argc != 0)
    {
        printf("error enter only one argument!!!!@@!!!");
        return 1;
    }
    printf("\n");
    return 2;



}
