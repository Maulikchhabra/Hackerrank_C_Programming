#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];
    int count[10]={0};
    scanf("%[^\n]%*c",s);
    //printf("%s",s);

    for(int i=0;i<strlen(s);i++){

       if(s[i] >= '0' && s[i] <= '9'){ //counting the frequency
            count[s[i] - '0']++;}     
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    for(int i = 0; i < 10; i++){
        printf("%d ", count[i]);}

    printf("\n");
        
    return 0;
}
