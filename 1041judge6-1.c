#include <stdio.h>
int main() {
    char ID[10];
    int ID_num[10], sum = 0;
    scanf("%s", ID);
    int i;
    for(i = 1; i < 10; i++) {
        ID_num[i] = ID[i] - '0';
    }
    ID_num[0] = ID[0] - 55;
    for(i = 1; i < 10; i++) {
        sum = sum + ID_num[i] * (9 - i);
    }
    if((ID_num[0] % 10 * 9 + ID_num[0] / 10 + sum + ID_num[9]) % 10 != 0) {
        printf("Fake\n");
    } else {
        printf("Real\n");
    }
}
