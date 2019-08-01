#include <stdbool.h>
#include <stdlib.h>


bool mx_isspace(char c);
void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);

char *mx_strtrim(const char *str) {
    char *res = "";
    int len = mx_strlen(str);
    int flag = -1;
    int last;

    for (int i = 0; i < len; ++i) {
        if (!mx_isspace(str[i])) {
            if (flag != -1){
                last = i;
            }
            else {
                flag = i;
                last = flag;
            }
        }
    }
    printf("%d\n",last );
    if (flag == -1) {
        return NULL;
    }
    res = mx_strnew(last - flag);
    mx_strncpy(res, str + flag, (last - flag) + 1);
    return res;
}
