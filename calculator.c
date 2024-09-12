#include <stdio.h>
#include <cs50.h>

// int main(void)
// {
// int x = get_int("x: ");
// int y = get_int("y: ");
//     int z = x + y;
//     printf("%i\n", z);
// }

int add(int x, int y);
int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%i\n", add(x, y));
}

int add(int a, int b)
{
    return a + b;
}