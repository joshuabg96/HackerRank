#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


typedef struct
{
    int data[1000];
    int top;
} Stack;

void Stack_init(Stack *s)
{
    s->top = -1;
}

void Stack_Push(Stack *s, int value)
{
    s->top ++;
    s->data[s->top] = value;
    
}

void Stack_Pop(Stack *s)
{
    s->top--;
}

void Stack_Print(Stack *s)
{
    printf("%d",s->data[0]);
}



int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Stack s;
    Stack_init(&s);

    int q = 0, option = 0, value = 0;
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        scanf("%d", &option);
        if (option == 1)
        {
            scanf("%d", &value);
            Stack_Push(&s, value);
        }
        else if (option == 2)
        {
            /* code */
        }
        
        printf("%d %d",option, value);
    }
    
    return 0;
}