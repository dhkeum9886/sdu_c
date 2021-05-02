#include <stdio.h>

/*
 * 파일명 : 2020620001_금동환_smaller
 * 3개의 정수를 입력 받아서 가장 작은 수를 출력하도록 하세요.
 * 작성자 : 금동환
 */

int main() {
	
	int x, y, z, min;
    printf("첫번째 정수 :" );
    scanf("%d", &x);
    
    min = x;
    
    printf("두번째 정수 :" );
    scanf("%d", &y);
    
    if (x>y){
    	min = y;
	};    
    
    
    printf("세번째 정수 :" );
    scanf("%d", &z);
    
    if (y>z){
    	min = z;
	};
	
	printf("입력한 %d, %d, %d 중 가장 작은수는 %d 입니다. \n", x, y, z, min);	
	
	
	
    return 0;
}
