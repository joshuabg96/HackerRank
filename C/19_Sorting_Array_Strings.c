#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Alphabetically
int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);

}

// Alphabetically reverse
int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}

// By number of distint characters but if the same #, alphabetically first
int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int count[2] = {0};
    int character_a[256] = {0};
    int character_b[256] = {0};
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (character_a[(unsigned char)a[i]] == 0)
        {
            character_a[(unsigned char)a[i]] = 1;
            count[0]++;
        }
    }
    for (int i = 0; b[i] != '\0'; i++)
    {
        if (character_b[(unsigned char)b[i]] == 0)
        {
            character_b[(unsigned char)b[i]] = 1;
            count[1]++;
        }
    }
    
    if (count[0] > count[1])
    {
        return 1;
    }
    else if (count[0] == count[1])
    {
        return strcmp(a, b);
    }
    else 
    {
        return 0;
    }
}

// By lenght - to +, but if the same #, alphabetically reverse first.
int sort_by_length(const char* a, const char* b) {

    if (strlen(a) > strlen(b))
    {
        return 1;
    }
    else if (strlen(a) == strlen(b))
    {
        return strcmp(a, b);
    }
    else 
    {
        return 0;
    }
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    int flag = 1;
    while (flag)
    {
        flag = 0;
        for (int i = 0; i < len - 1; i++)
        {
            if (cmp_func(arr[i], arr[i + 1]) > 0)
            {
                char* temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                flag = 1;
            }
        }
    }    
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}