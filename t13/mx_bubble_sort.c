//#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);
int mx_bubble_sort(char **arr, int size) {
    int num_swap = 0;
    if (!arr)
        return -1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (mx_strcmp(arr[j], arr[j + 1]) > 0) {
                char *n = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = n;
                num_swap++;
            }
        }
    }
    return num_swap;
}
//  int main() {
//     char *arr[] = {"abc", "xyz", "ghi", "def"};
//     printf("%d \n", mx_bubble_sort(arr, 4));
// }
// int main() {
//     char *arr[] = {"abc", "acb", "a"};
//     printf("%d \n", mx_bubble_sort(arr, 3));
// }
