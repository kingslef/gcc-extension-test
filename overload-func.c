#include <stdio.h>
#include <string.h>
#include <stdint.h>

#define is_equal(x, y)                                              \
    do {                                                            \
        if (__builtin_types_compatible_p(__typeof__ (x), char[]))   \
            is_equal_string((const char *)x, (const char *)y);      \
        else if (__builtin_types_compatible_p(__typeof__ (x), int)) \
            is_equal_int((int)(intptr_t)x, (int)(intptr_t)y);       \
    } while (0)

void is_equal_string(const char * x, const char * y)
{
    printf("%s: '%s' and '%s' are %sthe same\n",
           __func__, x, y, strcmp(x, y) != 0 ? "not " : "");
}

void is_equal_int(int x, int y)
{
    printf("%s: '%d' and '%d' are %sthe same\n",
           __func__, x, y, x != y ? "not " : "");
}

int main(void)
{
    is_equal(1, 1);

    is_equal("foo", "foo");

    return 0;
}
