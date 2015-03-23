#include <stdio.h>

void func_with_args(int i)
{
    printf("received %d\n", i);
}

void func_without_void()
{
    void* args = __builtin_apply_args();

    __builtin_apply(func_with_args, args, sizeof(int));
}

int main(void)
{
    func_without_void(10);

    return 0;
}
