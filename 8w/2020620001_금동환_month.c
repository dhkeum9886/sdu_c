#include <stdio.h>

/*
 * ���ϸ� : 2020620001_�ݵ�ȯ_month
 * ���� �Է¹޾Ƽ� ��¹���� ����ϰ�, ���� �Է��� ���� 1~12 �� �ƴϸ� ������ �ޡ� �̶�� ��µǵ��� �ϼ���.
 * �ۼ��� : �ݵ�ȯ
 * �ۼ��� :  20210502
 */

int main() {
	
	int month;
    printf("���� �Է��Ͻÿ�: " );
    scanf("%d", &month);
    
    
    switch (month)
	{
		case 2:	{
			printf("%d���� �ϼ��� %d�� �Դϴ�. \n", month, 28);			
		}	break;
		case 4:
		case 6:
		case 9:
		case 11: {
			printf("%d���� �ϼ��� %d�� �Դϴ�. \n", month, 30);			
		}	break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: {
			printf("%d���� �ϼ��� %d�� �Դϴ�. \n", month, 31);			
		}	break;
		default: {
			printf("%d �� ���� �� �Դϴ�.\n" , month);			
			printf("%d���� �ϼ��� %d�� �Դϴ�. \n", month, 0);			
			break;
		}
	}
	
	
    return 0;
}
