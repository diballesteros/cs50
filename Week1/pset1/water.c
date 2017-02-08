#include <cs50.h>
#include <stdio.h>

int consumption(int minutes);

int main(void)
{
    printf("Minutes: ");
    int minutes = get_int();
    printf("Bottles: %i\n", consumption(minutes));
    
}

int consumption(int minutes)
{
    return (192 * minutes)/16;
}