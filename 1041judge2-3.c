#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j, tmp,  boy, girl, boyH, girlH;
    scanf("%d", &n);
    int num[n];
    boy = rand() % n + 1;
    girl = n - boy;
    printf("男生%d人 女生%d人\n", boy, girl);
    for(i = 0; i < n; i++) {
        num[i] = i + 1;
    }
    for(i = 0; i < n; i++) {
        j = rand() % n;
        tmp = num[i];
        num[i] = num[j];
        num[j] = tmp;
    }
    for(i = 1; i <= boy; i++) {
        boyH = rand() % 101 + 400;
        printf("No: %d, Height: %d cm\n", num[i - 1], boyH);
    }
    for(i = 1; i <= girl; i++) {
        girlH = rand() % 101 + 300;
        printf("No: %d, Height: %d cm\n", num[i - 1 + boy], girlH);
    }
}
