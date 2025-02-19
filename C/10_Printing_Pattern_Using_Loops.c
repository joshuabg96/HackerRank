#include <stdio.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int Array[(n*2)-1][(n*2)-1], start;
    for (int num = n; num > 0; num--)
    {
        start = n - num;
        for (int i = start; i < (n*2)-1 - start; i++)
        {
            for (int j = start; j < (n*2)-1 - start; j++)
            {
                Array[i][j] = num;
            }
        }
    }
    for (int i = 0; i < (n*2)-1; i++)
    {
        for (int j = 0; j < (n*2)-1; j++)
        {
            printf("%d ", Array[i][j]);
        }
        printf("\n");
    }   
    return 0;
}