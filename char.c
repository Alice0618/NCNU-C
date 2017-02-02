#include <stdio.h>
// C無法複製 array給 function，而是以複製地址(array的開頭位置)
void mystrcpy(char *s, char *d) {
    while((*d++ = *s++) != 0);
    // while((*d = *s) != 0) {
    //     d++;
    //     s++
    // }
}
/*
void mystrcpy(char s[], char d[]) {
    int i;
    for(i = 0; s[i] != 0; i++) {
        d[i] = s[i];
    }
    d[i] = 0;
}
*/
void mystrcat(char *s, char *a) {
    while(*s != 0) {
        s++;
    }
    while((*s = *a) != 0) {
        s++;
        a++;
    }
}
void main() {
    char s[40];
    char d[20];
    // 此陣列最多存 19
    scanf("%19s", s);

    mystrcpy(s, d);
    printf("%s", d);

    mystrcat(s, "Fish");
    printf("%s", s);
}
