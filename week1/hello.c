#include <stdio.h>
//#include <cs50.h>

int main(void)
{
    /*
    write program in such a way that it first prompts the user for their name and 
    then prints hello, so-and-so, where so-and-so is their actual name.
    */
    printf("What is your name? ");
    char name[10];
    scanf("%s", name);
    // string name = get_string("What is your name? ");

    printf("hello, %s\n", name);
}
