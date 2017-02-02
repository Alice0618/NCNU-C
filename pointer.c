#include <stdio.h>
// pointer
// *為右結合

void main() {
    // x is an integer
    int x = 5;
    // y is a pointer to int
    // 透過 y的內容(即 x的位址)，指向此位址的內容(即 x的值)
    int *y;
    // z is a pointer to pointer to int
    // 透過 z的內容(即 y的位址)，指向此位址的內容(即 x的位址)，再指向此位址的內容(即 x的值)
    int **z;

    // &表示取變數的位址
    // 取變數 x的位址存入變數 y
    // 取變數 y的位址存入變數 z
    y = &x;
    z = &y;
    printf("x = %d\n\n", x);
    printf("address of x is %p\n", &x);
    printf("address of y is %p\n\n", &y);
    printf("content of y is the address of x , that is %p\n", y);
    printf("*y = %d\n", *y);
    printf("content of z is the address of y , that is %p\n", z);
    printf("**z = %d\n\n", **z);

    *y = 0;
    printf("after *y = 0, x is %p", x);
}
