#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size) {
    int *res;

    res = malloc(size);
    if (res == NULL || src == NULL) {
        return NULL;
    }
    for (int i = 0; i < size; ++i) {
        res[i] = src[i];
    }
    return res;
}
