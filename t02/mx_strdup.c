#include <stdlib.h>

int mx_strlen(const char *s);

char *mx_strcpy(char *dst, const char *src);

char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    char *new;
    int len = mx_strlen(str);

    new = mx_strnew(len);
    if (new == NULL) {
        return NULL;
    }
    mx_strcpy(new, str);
    return new;
}
