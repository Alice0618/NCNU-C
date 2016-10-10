#include <stdio.h>
int main() {
    int age, i;
    scanf("%d", &age);
    i = 1;
    // while(i <= age) {
    //     printf("year %d\n", i);
    //     i++;
    // }
    for(i = 1; i <= age; i++) {
        printf("year %d\n", i);
    }
}
