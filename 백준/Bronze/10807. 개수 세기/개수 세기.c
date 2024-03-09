
#include <stdio.h>

int main(void) {
    
    int N ; // 입력할 정수의 개수
    int v; // 찾으려는 정수
    int a[100]; // 입력 정수
    int cnt=0; // 찾으려는 정수 카운트

    scanf("%d", &N);
    
    // 입력할 정수
    for (int i=0; i<N; i++) {
        scanf("%d", &a[i]);
    }
    
    scanf("%d", &v);
    
    for (int j=0; j<N; j++){
        if(a[j] == v)
        cnt++;
    }
    printf("%d", cnt);

}