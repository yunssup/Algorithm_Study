#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{	
	int Subject; // 과목 수
	int score[1000]={0}; // 점수
	int i;
	int Max=0;
	float Average=0;

	scanf("%d", &Subject); // 과목 수 입력받기
	
	for (i=0; i<Subject; i++){
	    
	    scanf("%d", &score[i]); // 과목 수 입력받기
	    
	     if (score[i]>Max)
            Max= score[i];
	}
	
	for (i=0; i<Subject; i++){
	    Average = Average + (float)score[i]/Max*100;
	    
	}
    
    printf("%f\n", Average/Subject);

	return 0;
}
