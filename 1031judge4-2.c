#include <stdio.h>
int main() {
    int year, month, date, day;
    int month_num[12] = {5, 1, 1, 4, 6, 2, 4, 0, 3, 5, 1, 3};
    scanf("%d %d %d", &year, &month, &date);
    if(year > 2000) {
        day=((year-2000)+(year-2000)/4+1+month_num[month-1]+date)%7;
    } else {
        day=((year-2000)-(year-2000)/4+month_num[month-1]+date)%7;
    }
    printf("%d\n", day);
}
