#include <stdio.h>

enum en;
void func(const enum en e);

enum en {
    FIRST,
    SECOND
};

int main(void)
{
    enum en e = SECOND;

    func(e);

    return 0;
}

void func(enum en e)
{
    printf("enum is %d\n", e);
}
