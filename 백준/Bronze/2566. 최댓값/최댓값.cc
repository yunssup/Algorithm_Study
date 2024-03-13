#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num=0;
	int n, m=0;
	int i, j=0;
	int max=0;

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			scanf("%d", &num); //격자판 9x9입력
			if (max < num) { // max가 num보다 작으면
				max = num; // max에 num값 대입
				n = i;
				m = j;
			}
		}
	}
	printf("%d\n", max);
	printf("%d %d", n + 1, m + 1); //n,m은 인덱스 값이므로 원래 값의 +1을 해주어야함.

	return 0;
}