#include <stdio.h>
//#include <string.h>
//#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char Numbers [9][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
        {
            printf("%s\n", Numbers[i - 1]);
        }
        else
        {
            (i % 2) ? (printf("odd\n")) : (printf("even\n"));
        } 
    }
    

    return 0;
}