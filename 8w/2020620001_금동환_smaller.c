#include <stdio.h>

/*
 * ���ϸ� : 2020620001_�ݵ�ȯ_smaller
 * 3���� ������ �Է� �޾Ƽ� ���� ���� ���� ����ϵ��� �ϼ���.
 * �ۼ��� : �ݵ�ȯ
 */

int main() {
	
	int x, y, z, min;
    printf("ù��° ���� :" );
    scanf("%d", &x);
    
    min = x;
    
    printf("�ι�° ���� :" );
    scanf("%d", &y);
    
    if (x>y){
    	min = y;
	};    
    
    
    printf("����° ���� :" );
    scanf("%d", &z);
    
    if (y>z){
    	min = z;
	};
	
	printf("�Է��� %d, %d, %d �� ���� �������� %d �Դϴ�. \n", x, y, z, min);	
	
	
	
    return 0;
}
