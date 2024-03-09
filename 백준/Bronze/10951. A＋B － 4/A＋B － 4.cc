#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A, B;

	while ((scanf("%d %d", &A, &B))!=EOF) 
	{
		printf("%d\n", A + B);
	}
	return 0;
}

// EOF: End-of-file, 파일 끝, 데이터 입력이 없을 때 실행을 끝냄
