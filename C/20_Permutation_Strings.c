#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

int next_permutation(int n, char **s)
{
	/**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/
    int k=-1;
    for(int i=0;i<n-1;i++)
    {
        if(strcmp(s[i],s[i+1])<0)
            k=i;
    }
    if (k==-1)
    return 0;

    int l=-1;
    for(int i=k+1;i<n;i++)
    {
        if(strcmp(s[k],s[i])<0)
            l=i;
    }

    if(l!=-1)
    {
        char* temp = s[k];
        s[k] = s[l];
        s[l] = temp;
    }
        
    //Reverse the sequence from a[k + 1] up to and including the final element a[n].
    int start=k+1;
    int end=n-1;
    while (start < end) {
        char*  temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
    return 1;   
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}