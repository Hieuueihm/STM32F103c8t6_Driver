#include <stdio.h>

int x __attribute__((aligned(16))) = 0;

int main()
{
    printf("Address of x: %p\n", (void *)&x);
    return 0;
}
