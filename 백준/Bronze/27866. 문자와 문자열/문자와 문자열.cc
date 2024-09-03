#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int index;
	char s[1000];

	scanf("%s", &s);
	scanf("%d", &index);

	printf("%c", s[index - 1]);

	return 0;
}