#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	int m;
	int a[100][100]; //첫번째 행렬
	int b[100][100]; //두번째 행렬
	int i, j;

	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		} //A행렬
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &b[i][j]);
		} //B행렬
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%d ", a[i][j] + b[i][j]);
		}
		printf("\n");
	}
}