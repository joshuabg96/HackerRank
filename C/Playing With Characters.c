/*Task

You have to print the character, ch , in the first line. Then print  in next line. s In the last line print the sentence, sen.

*/

#include <stdio.h>
#include <string.h>
int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char ch[100], s[100], sen[100];
    fflush(stdin);
    scanf(" %[^\n]", ch);
    fflush(stdin);
    scanf(" %[^\n]", s);
    fflush(stdin);
    scanf(" %[^\n]", sen);
    printf("%s\n%s\n%s", ch,s,sen);
    return 0;

}