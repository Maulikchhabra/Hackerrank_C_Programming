#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,c,d;
    float m,n,o,p;

    scanf("%d %d", &a,&b);
    scanf("%f %f",&m,&n);

    c = a+b;
    d = a-b;
    o = m+n;
    p = m-n;

    printf("%d %d",c,d);
    printf("\n");
    printf("%.1f %.1f",o,p);
    
    return 0;
}
