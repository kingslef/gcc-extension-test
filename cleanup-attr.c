#include <stdio.h>

void cleanup_file(FILE **f)
{
    if (*f) {
        printf("closing file\n");
        fclose(*f);
    }
}

void func(void)
{
    FILE * f __attribute__ ((cleanup(cleanup_file))) = fopen("/dev/null", "w");
    if (!f) {
        return;
    }

    fprintf(f, "test string");
}

int main(void)
{
    func();

    return 0;
}
