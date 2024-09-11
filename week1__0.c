/* i am on arm processor and can't use cs50.h */

#include <stdio.h>
#include <string.h>

int main()
{
    char answer[100];
    printf("What is your name? ");
    fgets(answer, sizeof(answer), stdin);
    answer[strcspn(answer, "\n")] = 0;
    printf("Hello, %s\n", answer);
    return 0;
}
