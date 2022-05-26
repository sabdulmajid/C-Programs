#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("Value of n: %i\n", n);
    printf("Address of n: %p\n", &n);
    int *p = &n;
    printf("Value of address of n: %i\n", *p); //A '&' is used to point to the location of the address. A '*' is used to retrieve the content of the address. 
}