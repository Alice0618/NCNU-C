#include <stdio.h>
int main(void) {
    int i, n, x;
    scanf("%d", &x);
    for(i=1; i<x; i++) {
        for(n=x; n>i; n--) {
            printf(" ");
        }
        for(n=1; n<=2*i-1; n++) {
            printf("*");
        }
        printf("\n");
    }
    for(i=x-2; i>=1; i--) {
        for(n=x; n>i; n--) {
            printf(" ");
        }
        for(n=1; n<=2*i-1; n++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
