#include <stdio.h>
int main() {
    int age;
    char sex;
    scanf("%d %c", &age, &sex);
    if(age >= 18 && sex == 'M') {
        printf("Man\n");
    } else if(age >= 18 && sex == 'F') {
        printf("Woman\n");
    } else if(age < 18 && sex == 'M') {
        printf("Boy\n");
    } else if(age < 18 && sex == 'F') {
        printf("Girl\n");
    }
}
