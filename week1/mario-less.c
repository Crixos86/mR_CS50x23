//#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    // Prompt user for height
    int height;
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 8);
    // Iterate from 1 through height:
    // now right-align that pyramid by pushing its hashes to the 
    // right by prefixing them with dots
    // for (int i = 1; i <= height; i++)
    // {
    //     // On iteration i, print i hashes and then a newline
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("#");
    //     }
    //     printf("\n");
    // }
    // Now, generate the pyramid with the right alignment
    for (int i = 1; i <= height; i++)
    {
        // Print the dots
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }
        // Print the hashes
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        // Print the newline
        printf("\n");
    }
}