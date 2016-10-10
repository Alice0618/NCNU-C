#include <stdio.h>
int get(int A, int B) {
    int a, b, add = 0;
    a = A % 10;
    b = B % 10;
    while(a != 0 || b != 0) {
        a = A % 10;
        b = B % 10;
        if(a + b >= 10) {
            add = add + 1;
            A = A / 10 + 1;
        } else {
            A = A / 10;
        }
        B = B / 10;
    }
    return add;
}
int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d %d\n", A + B, get(A, B));
}
