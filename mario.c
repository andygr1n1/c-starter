#include <cs50.h>
#include <stdio.h>

void print_blocks(int blocks);
int main(void)
{
    // int height = get_int("Height: ");
    // printf("Height: %i\n", height);

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("?");
    // }
    // printf("\n");

    int blocks;
    do
    {
        blocks = get_int("Size: ");
        if (blocks < 1 || blocks > 8)
        {
            printf("Size must be between 1 and 8\n");
        }
    } while (blocks < 1 || blocks > 8);

    print_blocks(blocks);
}

void print_row(int blocks)
{
    for (int i = 0; i < blocks; i++)
    {
        printf("#");
    }
    printf("\n");
}

void print_blocks(int blocks)
{
    for (int i = 0; i < blocks; i++)
    {
        print_row(blocks);
    }
}