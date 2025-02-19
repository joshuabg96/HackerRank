#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char num[1000];
    int Count[10] = {0,0,0,0,0,0,0,0,0,0};
    scanf("%s", num);
    for (int i = 0; num[i] != '\0'; i++)
    {
        if (num[i] >= 48 && num[i]<= 57)
        {
            Count[(num[i]-48)]++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", Count[i]);
    }
    
    return 0;
}