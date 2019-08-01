#include <stdlib.h>

char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2);
char *mx_strdup(const char *str);

char *mx_strjoin(char const *s1, char const *s2) {
    char *res;
    int len = mx_strlen(s1) + mx_strlen(s2);

    if (s1 == NULL && s2 == NULL) {
        return NULL;
    }
    if (s1 == NULL) {
        res = mx_strnew(mx_strlen(s2));
        mx_strcpy(res, s2);
        return res;
    }
    else if (s2 == NULL) {
        res = mx_strnew(mx_strlen(s1));
        mx_strcpy(res, s1);
        return res;
    }
    res = mx_strnew(len);

    if (res == NULL) {
        return NULL;
    }
    mx_strcpy(res, s1);
    mx_strcat(res, s2);
    return res;
}
