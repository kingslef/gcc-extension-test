#include <stdio.h>

int func(int a, int (**func_p)(int))
{
    /* declare with auto */
    auto int func2(int i);

    int func2(int i)
    {
        return i; // Could use variable a if function pointer from nested
                  // wouldn't be used
    }

    *func_p = func2;

    return func2(5 + a);
}

int main(void)
{
    int (*func_p)(int);

    printf("function with nested function returns %d\n",
           func(5, &func_p));

    printf("nested function returns %d\n",
           func_p(5));

    return 0;
}
