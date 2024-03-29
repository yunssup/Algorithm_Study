#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num[100];	// 입력받은 숫자
	int not_prime_num = 0;	// 소수가 아닌 숫자의 갯수
	int i, j;
	int N;	// 수의 개수

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}
	
	for (i = 0; i < N; i++) {
		// 1은 소수가 아니므로 카운트
		if (num[i] == 1) {
			not_prime_num++;
			continue;
		}
		// 1과 자기자신 이외의 수로 나누어지면 소수가 아니므로 카운트
		for (j = 2; j < num[i]; j++) {
			if ((num[i] % j) == 0) {
				not_prime_num++;
				break;
			}
		}
	}
	// 전체 숫자의 개수 중 소수가 아닌 것의 개수 빼기
	printf("%d", (N - not_prime_num));

	return 0;
}
