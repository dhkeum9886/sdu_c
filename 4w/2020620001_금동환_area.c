#include <stdio.h>

/*
 * 파일명 : 2020620001_금동환_area
 * 작성자 : 금동환
 */

#define PI 3.14

int main() {
	
	double circle_r = 0.0;
    printf("원의 반지름을 실수로 입력하시오. 예 <10.3> :" );
    scanf("%lf", &circle_r);
    
    if (0.0 >= circle_r) {
    	printf("에러");
    	return 1;
	}
    
    
    printf("원의 둘레: %.2f \n", (PI*2.0*circle_r));
    printf("원의 면적: %.4f \n", (PI*circle_r*circle_r));
    return 0;
}
