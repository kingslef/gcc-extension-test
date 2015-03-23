#include <stdio.h>

// From https://gcc.gnu.org/onlinedocs/gcc/Typeof.html#Typeof
#define max(a,b)                                \
    ({ typeof (a) _a = (a);                     \
        typeof (b) _b = (b);                    \
        _a > _b ? _a : _b; })

int main(void)
{
    const void* label = max(&&l1, &&l2);

    goto *label;

    goto *((void*)0x400537);

l1:
    return 1;
l2:
    return 2;
}
