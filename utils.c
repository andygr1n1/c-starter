#include <stdio.h>
#include "utils.h"

int get_int(const char *prompt)
{
    int num;
    printf("%s", prompt);
    scanf("%d", &num);
    return num;
}