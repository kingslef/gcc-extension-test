#include <stdio.h>

typedef int v4si __attribute__ ((vector_size (16)));

void print_v4si(const v4si *vec)
{
    printf("{%d, %d, %d, %d}\n", (*vec)[0], (*vec)[1], (*vec)[2], (*vec)[3]);
}

int main(void)
{
    v4si a = {1, 1, 1, 1};
    v4si b = {2, 2, 2, 2};

    v4si c = a + b;

    print_v4si(&c); // {3, 3, 3, 3}

    c = b * 8;

    print_v4si(&c); // {16, 16, 16, 16}

    return 0;
}
