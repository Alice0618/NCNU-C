#include <stdio.h>
void sayFutureAge(int a, int g) {
    printf("Future age is %d\n", a + g);
}
int main() {
    int age, grade;
    printf("Your age: ");
    scanf("%d", &age);
    printf("Your age: ");
    scanf("%d", &grade);
    sayFutureAge(age, grade);
}
