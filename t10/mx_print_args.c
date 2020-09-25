//#include <stdio.h>
void mx_printchar(char c);
void mx_printstr(const char *s);

int main(int argc, char *argv[]) {
    int i = 1;

    for (; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}
