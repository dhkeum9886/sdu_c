#include <stdio.h>

/*
 * ���ϸ� : 2020620001_�ݵ�ȯ_incdec
 * 2021.04.17
 * �ۼ��� : �ݵ�ȯ
 */

int main() {
	int x = 10, y = 20;
	printf("x=%d y=%d \n", x, y);
	int result;
	result = x++;
	
	printf("x++�� ��=%d\n", result);
	printf("x�� ��=%d\n", x);
	
	
	result = --y;
	
	
	printf("--y�� ��=%d\n", result);
	printf("y�� ��=%d\n", y);

    return 0;
}

