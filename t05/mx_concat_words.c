#include <stdlib.h>

char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
void mx_strdel(char **str);

char *mx_concat_words(char **words) {
    char *res = "";
    int i;

    for (i = 1; words[i] != NULL; ++i) {
        res = mx_strjoin(res, words[i - 1]);
        res = mx_strjoin(res, " ");
        mx_strdel(words + i - 1);
    }
    if (words[i] == NULL) {
        res = mx_strjoin(res, words[i - 1]);
        mx_strdel(words + i - 1);
    }
    return res;
}
