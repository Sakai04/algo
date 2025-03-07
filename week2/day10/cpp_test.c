#include <stdio.h>

char func(char *s, int a){
    if (strlen(s) > a) return *(s+a);
    else return '\0';

}


int main(int argc, char *argv[]){
    char str[50], nstr[10];
    int n;
    printf("문자열 입력: ");
    gets(str);

    printf("정수 입력");
    scanf("%d, %n");

    char rst = func(str, n);

    rst? print("rst = %c", rst) : printf("문자 없음");

    return 0;
}