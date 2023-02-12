#include <stdio.h>

int main(void)
{
    /*
    TODO: Prompt for start size 
    If the user enters a number less than 9 (the minimum allowed population size), 
    the user should be re-prompted to enter a starting population size until 
    they enter a number that is greater than or equal to 9.
    */ 
    int start_size;
    do
    {
        printf("Start size: ");
        scanf("%d", &start_size);
    }
    while (start_size < 9);

    /*
    TODO: Prompt for end size
    If the user enters a number less than the starting population size, the user should
    be re-prompted to enter an ending population size until they enter a number that 
    is greater than or equal to the starting population size.
    */ 
    int end_size;
    do
    {
        printf("End size: ");
        scanf("%d", &end_size);
    }
    while (end_size < start_size);
    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    int population = start_size;
    while (population < end_size)
    {
        population = population + population / 3 - population / 4;
        years++;
    }
    // TODO: Print number of years
    printf("Years: %d\n", years);
}