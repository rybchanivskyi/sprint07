#include <stdlib.h>

void mx_strdel(char **str) {
    *str = NULL;
    free(*str);
}
