#include <stdio.h>

/*
 * 파일명 : 2020620001_금동환_incdec
 * 2021.04.17
 * 작성자 : 금동환
 */

int main() {
	int x = 10, y = 20;
	printf("x=%d y=%d \n", x, y);
	int result;
	result = x++;
	
	printf("x++의 값=%d\n", result);
	printf("x의 값=%d\n", x);
	
	
	result = --y;
	
	
	printf("--y의 값=%d\n", result);
	printf("y의 값=%d\n", y);

    return 0;
}

