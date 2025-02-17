#include <stdio.h>


int main() {
	
    int n, sum = 0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    for (int i = 1; i <= 10000; i*=10)
    {
        sum = sum + (n % (i*10)/i);
    }
    printf("%d", sum);
    return 0;
}