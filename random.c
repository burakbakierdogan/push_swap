#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    /* It returns the same sequence of random number
    on every execution of the program. */
    for (i = 0; i <500; i++)
    {
        printf("%d ", rand());
     }
     return 0;
}
