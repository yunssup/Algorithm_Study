#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num[10]; // 숫자 10개 입력 받을거임
	int i, j;
	int result=0; // 나머지 결과
	int count; // 나머지 개수수

	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]); // 10개 숫자 입력받기
		
		num[i] = num[i] % 42; // 나머지 구해서 num[i]에 값 대입하기
	}
	
	for (i = 0; i < 10; i++) { // for문 통해서 나머지 개수 세기기
		count = 0;
		for (j = 0; j < i; j++)
		{
			if (num[i] == num[j])
				count++;
		} 
		if (count == 0)
			result++;
	}
	printf("%d", result);

	return 0;
}