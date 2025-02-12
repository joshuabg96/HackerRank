#include <stdio.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int max_AND = 0, max_OR = 0, max_XOR = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int a = i + 1; a <= n; a++)
        {
            if((i & a) > max_AND && (i&a) < k)
            {
                max_AND = (i & a);
            }
            if((i | a) > max_OR && (i|a) < k)
            {
                max_OR = (i | a);
            }
            if((i ^ a) > max_XOR && (i^a) < k)
            {
                max_XOR = (i ^ a);
            }
        }
    }
    printf("%d\n%d\n%d", max_AND, max_OR, max_XOR);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}