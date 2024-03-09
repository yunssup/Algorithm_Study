#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num[9];
    int i;
    int max=num[0];
    int index;

    for (i = 0; i < 9; i++) {
        scanf("%d", &num[i]); // 9개 정수 입력
        if (num[i] > max) {
            max = num[i];
            index = i;
        }
    }
    printf("%d %d", max, index+1);

    return 0;
}
