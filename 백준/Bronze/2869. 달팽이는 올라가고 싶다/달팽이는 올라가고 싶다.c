// 낮에 A미터 올라가고 밤에 B미터 내려옴
// 달팽이는 하루에 (A-B)만큼 이동함.

#include <stdio.h>

int main() {

    int A, B, V, Day; 
    scanf("%d %d %d", &A, &B, &V);

    Day = (V-B-1)/(A-B)+1;
    printf("%d",Day);
    
    
    return 0;
}

