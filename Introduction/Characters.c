#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char c;
    //String s;
    char s[20];
    char p[100];


    scanf("%c",&c);
    scanf("%s",s);
    scanf("\n");
    fgets(p, sizeof(p), stdin);

    printf("%c",c);
    printf("\n");
    printf("%s",s);
    printf("\n");
    puts(p);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
