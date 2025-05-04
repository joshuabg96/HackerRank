#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    int flag = 0;
    float s1, s2, area1, area2;
    do
    {
        flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            s1 = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
            area1 = sqrt(s1 * (s1 - tr[i].a) * (s1 - tr[i].b) * (s1 - tr[i].c));
            s2 = (tr[i + 1].a + tr[i + 1].b + tr[i + 1].c) / 2.0;
            area2 = sqrt(s2 * (s2 - tr[i + 1].a) * (s2 - tr[i + 1].b) * (s2 - tr[i + 1].c));
            if (area1 > area2)
            {
                triangle temp = tr[i];
                tr[i] = tr[i + 1];
                tr[i + 1] = temp;
                flag = 1;
            }
        }
    } while (flag);
    
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}