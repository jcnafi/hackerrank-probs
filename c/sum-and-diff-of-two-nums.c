#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float p, q;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &p, &q);

    printf("%d %d\n", a+b, a-b);
    printf("%0.1f %0.1f\n", p+q, p-q);
	
    return 0;
}
