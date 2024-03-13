#include <stdio.h>

int main(void)
{
    int StundentNum[30]={0}; // 학생 번호가 30까지 있으므로 길이 30인 배열 선언 및 초기화
    int SubmitNum; // 제출한 학생 번호
    for (int i=0; i<28;i++){
        scanf("%d",&SubmitNum);
        StundentNum[SubmitNum-1]++; 
    }
    for (int j=0; j<30; j++){
        if (StundentNum[j]==0)
        printf("%d\n", j+1);
    }
    
}