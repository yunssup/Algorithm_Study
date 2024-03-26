#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void){
    
    int num=0;
    int max=0;
    int x,y=0;
    
    for (int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            scanf("%d",&num);
            
            if(max<num) {
                max=num;
                x=i;
                y=j;
            }
        }
    }
    printf ("%d\n", max);
    printf ("%d %d", x+1, y+1);
    
    return 0;
    
}
