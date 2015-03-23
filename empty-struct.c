#include <stdio.h>

struct empty {

};

int main(void)
{
    printf("sizeof empty %zu\n", sizeof(struct empty));

    return 0;
}
