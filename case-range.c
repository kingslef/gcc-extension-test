#include <stdio.h>

void func(int i)
{
    switch (i) {
    case 0 ... 5:
        printf("less than 6\n");
        break;
    default:
        printf("6 or more\n");
        break;
    }
}

int main(void)
{
    func(2);

    func(7);

    return 0;
}
