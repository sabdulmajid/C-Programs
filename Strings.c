#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = "HI!";
    char *q = "HI!";

    if (strcmp(s, q) == 0)
    {
        printf("\nSame\n\n");
    }
    else
    {
        printf("\nDifferent\n\n");
    }


    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%i\n", *(s+3));
}