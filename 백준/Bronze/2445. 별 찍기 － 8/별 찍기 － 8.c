#include <stdio.h>

int main() {
    int n;
    int i,j;
    scanf("%d",&n);

    for(i=1; i<=n; i++) { // n번 줄 반복하는 for 문
        
                    for (j=1; j<=i; j++) // 왼쪽 * 출력 for문
                printf("*");

        



        
        for(j=1; j<=2*(n-i); j++) // 공백 출력 위한 for문
            printf(" ");
                    for (j=1; j<=i; j++) // 왼쪽 * 출력 for문
                printf("*");
        printf("\n");
    }

    for(i=n-1; i>=1; i--){
   for (j=1; j<=i; j++) // 왼쪽 * 출력 for문
                printf("*");

        



        
        for(j=1; j<=2*(n-i); j++) // 공백 출력 위한 for문
            printf(" ");
                    for (j=1; j<=i; j++) // 왼쪽 * 출력 for문
                printf("*");        printf("\n");
    }
    return 0;
}