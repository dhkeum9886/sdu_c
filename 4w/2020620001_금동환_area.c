#include <stdio.h>

/*
 * ���ϸ� : 2020620001_�ݵ�ȯ_area
 * �ۼ��� : �ݵ�ȯ
 */

#define PI 3.14

int main() {
	
	double circle_r = 0.0;
    printf("���� �������� �Ǽ��� �Է��Ͻÿ�. �� <10.3> :" );
    scanf("%lf", &circle_r);
    
    if (0.0 >= circle_r) {
    	printf("����");
    	return 1;
	}
    
    
    printf("���� �ѷ�: %.2f \n", (PI*2.0*circle_r));
    printf("���� ����: %.4f \n", (PI*circle_r*circle_r));
    return 0;
}
