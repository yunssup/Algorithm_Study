#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int A, B;
        scanf("%d %d", &A, &B);
        printf("%d\n", A + B);
    }
}