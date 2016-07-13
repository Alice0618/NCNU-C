#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c );
    //a=b=c=0
    if(a == 0 && b == 0 && c == 0) {
        printf("無限多組解\n");
    } else if(a == 0 && b == 0 && c != 0) {
        printf("無解\n");
    } else if(a == 0 && b != 0) {//a=0
        printf("%lf\n", (-c)/b);
    } else if(a != 0 && b*b-4*a*c > 0) {//判別式>0, 兩組解
        printf("%lf %lf\n", (-b+sqrt(b*b-4*a*c))/(2*a), (-b-sqrt(b*b-4*a*c))/(2*a));
    } else if(a != 0 && b*b-4*a*c == 0) {//判別式=0, 重根
        printf("%lf\n", (-b)/(2*a));
    } else if(a != 0 && b*b-4*a*c < 0) {//判別式<0, 虛根
        printf("%lf+%lfi %lf-%lfi\n", ((-b)/(2*a)), sqrt(-(b*b-4*a*c))/(2*a), ((-b)/(2*a)), sqrt(-(b*b-4*a*c))/(2*a));
    }
}
