#include <cs50.h>
#include <stdio.h>

// int main(void)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         printf("i is %i\n", i);
//     }
// }

// int main(void)
// {
//     int counter = 0;
//     while (counter < 3)
//     {
//         printf("i is %i\n", counter);
//         counter++;
//     }
// }

void meow(int n);
int main(void)
{
    meow(30);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}