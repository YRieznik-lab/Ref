//#include <stdio.h>

char *mx_strcpy(char *dst, const char *src) {
    int i;
    for (i = 0; src[i] != '\0'; i++) {
        dst[i] = src[i];
    }
         while(dst[i] != '\0')
        dst[i] = '\0';
    return dst;
}

// int main() {
// 	char dst[] = "";
// 	char src[] = "world";
// 	mx_strcpy(dst, src);
// 	printf("%s", dst);
// }
