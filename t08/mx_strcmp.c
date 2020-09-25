//#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2) {
    int i = 0;

    while((s1[i] && s2[i]) && s1[i] == s2[i])
        i++;
    return s1[i] - s2[i];
}

// int main() {
// const char s1[] = "ffff";
// const char s2[] = "pppppp";
// printf("%d", mx_strcmp(s1, s2));
// }
