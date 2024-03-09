
#include <stdio.h>

int main(void) {
    
    int N ; // 입력할 정수의 개수
    int a[1000000]; // 입력 정수

    scanf("%d", &N);
    
    // 입력할 정수
    for (int i=0; i<N; i++) {
        scanf("%d", &a[i]);
    }
    // 최대 최소 구하기
    
    int min = a[0];
    int max = a[0]; 
    // 배열 초기화
    
    for (int j=0; j<N; j++){
        if (a[j]<min)
        min=a[j];
        if (a[j]>max)
        max= a[j];
    }
    printf("%d %d", min, max);
}