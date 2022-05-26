#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = s;

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    char *u = get_string("u: ");
    char *v = malloc(strlen(u) + 1);
    for (int i = 0, n = strlen(u); i <= n; i++) // All of this can be done with a simple function called 'strcpy(destination, source)'. '
    {
        v[i] = u[i];
    }

    if (strlen(v) > 0)
    {
        v[0] = toupper(v[0]);
    }
    printf("u: %s\n", u);
    printf("v: %s\n", v);

    free(t);

}