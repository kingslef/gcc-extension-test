#include <stdio.h>

int main(void)
{
    int i = 0;

    {
        __label__ label;

        goto label;

    label:
        i++;
    }


    goto label;

label:

    printf("i is %d\n",
           i);

    return 0;
}
