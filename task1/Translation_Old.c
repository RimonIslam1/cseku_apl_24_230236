#include <stdio.h>
#include <string.h>
 
void reverse_string(char *str)
{
    int i, len;
    len = strlen(str);
 
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i -  1] = temp;
    }
}
 
int main()
{
    char s[102], t[102];
 
    scanf("%s", s);
    scanf("%s", t);
 
    reverse_string(t);
 
    if (strcmp(s, t) == 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
 
    return 0;
}