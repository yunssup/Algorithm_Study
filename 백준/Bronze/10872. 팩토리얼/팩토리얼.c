#include <stdio.h>

int factorial(int n){

    if(n>1)
        return n*factorial(n-1);
    else return 1; 
} // 팩토리얼 순환 구현

int main (void) {
    int num;
    scanf("%d",&num); // 입력 받을 정수

    factorial(num); // 팩토리얼 함수로 가서
    printf("%d", factorial(num)); // 결과 가져오기!!
    return 0;
}