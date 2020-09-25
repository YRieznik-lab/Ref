int mx_strlen(const char *s) {
    int result = 0;
    if (s != '\0')
        while(*s++ != '\0')
            result++;
    return result;
}
