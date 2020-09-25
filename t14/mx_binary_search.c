//#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count){
    int first = 0;
    int last = size - 1;
    int mid;

    if (s)
        while(first <= last){
            mid = (first + last) / 2 ;
            (*count)++;
            if (mx_strcmp(arr[mid], s) == 0)
                 return mid;
            if (mx_strcmp(arr[mid], s) > 0)
                 last = mid - 1;
            else
                 first = mid + 1;
        }
    *count = 0;
    return -1;
}

// int main(){
//      char *arr[]= {"222", "Abcd", "aBc", "ab", "az", "z"};
//      int count= 0;
//      printf("%d and count = %d", mx_binary_search(arr, 6, "ab", &count), count);//returns 3 and count = 3
// }

