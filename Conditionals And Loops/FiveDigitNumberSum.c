#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum =0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    
    while(n){
        sum =sum + n%10;
        n =n/10;
        
    }
    sum = sum +n;
    printf("%d",sum);
    return 0;
}
