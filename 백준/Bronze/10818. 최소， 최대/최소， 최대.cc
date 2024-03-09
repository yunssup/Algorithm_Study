#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int N; //정수의 개수
    int arr[1000000];
    int i; 

    scanf("%d", &N); 

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    } // 정수 개수 입력

    int min = arr[0], max = arr[0]; // 배열 초기화
    for (int j = 0; j < N; j++) { 
        if (arr[j] < min) 
            min = arr[j]; 
        if (arr[j] > max)
            max = arr[j];
    }

    printf("%d %d", min, max);
}