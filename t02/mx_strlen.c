//#include <stdio.h>

int mx_strlen(const char *s) {
	int count = 0;
	while(s[count] != '\0') {
		count++;
	}
	return count;
}

// int main() {
// 	char str[] = "Hello";
// 	printf("%d\n", mx_strlen(str));
// }	

