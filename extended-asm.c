#include <stdio.h>
#include <inttypes.h>

void get_rdtsc(unsigned int * restrict h, unsigned int * restrict l)
{
    __asm__ volatile("rdtsc" : "=a" (*l), "=d" (*h));
}

int main(void)
{
    unsigned int h;
    unsigned int l;

    get_rdtsc(&h, &l);

    printf("rdtsc: %" PRIu64 "\n", (((uint64_t)h) << 32) | l);

    return 0;
}
