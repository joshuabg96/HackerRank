#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */    
    int* temp = (int*) malloc(num * sizeof(int));
    int count = 0;
    for (int i = num - 1; i >= 0; i--)
    {
        temp[count] = arr[i];
        count++;
    }

    //Alternative Solution without request additonal memory
    /*
    int temp;
    for(i = 0; i < num/2; i++) 
    {
        temp = arr[i];
        arr[i] = arr[num-1-i];
        arr[num-1-i] = temp;
    }
    */
    

    for(i = 0; i < num; i++)
        printf("%d ", *(temp + i));

    free(temp);
    free(arr);
    return 0;
}