#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int m,int n,int o,int p){
    if(m > n && m> o && m>p){
        return m;
    }
    else if(n>m && n>o && n>p){
        return n;
    }
    else if(o>m && o>n && o>p){
        return o;
    }
    else{return p;}
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
