#include <stdio.h>

int main(void) {
    
    int N ; // 입력할 정수의 개수
    int X; // 보다 작은 정수 찾는 기준점/
    int a[10000]; // 입력 정수

    scanf("%d %d", &N, &X);
    
    // 입력할 정수
    for (int i=0; i<N; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int j=0; j<N; j++){
        if(a[j] < X)
            printf("%d ",a[j]);
    }

}