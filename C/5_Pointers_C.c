#include <stdio.h>
#include <stdlib.h> // Needed for abs function.

void update(int *a,int *b) {
    // Complete this function
    int temp = *a;
    *a = *a + *b; 
    // using stdlib  -> *b = abs(*a - *b);
    // Not using stdlib
    *b =  (*b > temp) ? (*b - temp) : (temp - *b);
}

int main() {
    // For easy understand, * is used to init a pointer and get the value of a pointer
    // & is used to get the direction of a variable.
    // Note: it is not fully correct but it works for now.
    int a, b;                   // variable init
    int *pa = &a, *pb = &b;     // Pointer *pa and *pb save the direction of a and b using &
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}