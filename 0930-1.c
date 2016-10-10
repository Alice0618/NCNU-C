#include <stdio.h>
int main() {
    int age, year;
    scanf("%d", &year);
    if(age % 400 == 0 || age % 100 != 0 && age % 4 == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}
