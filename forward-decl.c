#include <stdio.h>
#include <string.h>

void func(size_t len; int arr[len][len], size_t len)
{
    printf("inside function: sizeof arr: %zu, arr[0]: %zu\n",
           sizeof(arr), sizeof(arr[0]));

    for (size_t i = 0u; i < len; i++) {
        for (size_t j = 0u; j < len; j++) {
            printf("arr[%zu][%zu]: %d\n", i, j, arr[i][j]);
        }
    }
}

int main(void)
{
    size_t len = 5;
    int arr[len][len];
    memset(arr, -1, sizeof(arr));

    printf("outside of function: sizeof arr: %zu, arr[0]: %zu\n",
           sizeof(arr), sizeof(arr[0]));

    func(arr, len);

    return 0;
}
