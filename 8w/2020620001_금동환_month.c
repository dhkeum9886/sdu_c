#include <stdio.h>

/*
 * 파일명 : 2020620001_금동환_month
 * 월을 입력받아서 날쨔수를 출력하고, 만약 입력한 월이 1~12 가 아니면 ‘없는 달’ 이라고 출력되도록 하세요.
 * 작성자 : 금동환
 * 작성일 :  20210502
 */

int main() {
	
	int month;
    printf("달을 입력하시오: " );
    scanf("%d", &month);
    
    
    switch (month)
	{
		case 2:	{
			printf("%d월의 일수는 %d일 입니다. \n", month, 28);			
		}	break;
		case 4:
		case 6:
		case 9:
		case 11: {
			printf("%d월의 일수는 %d일 입니다. \n", month, 30);			
		}	break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: {
			printf("%d월의 일수는 %d일 입니다. \n", month, 31);			
		}	break;
		default: {
			printf("%d 는 없는 달 입니다.\n" , month);			
			printf("%d월의 일수는 %d일 입니다. \n", month, 0);			
			break;
		}
	}
	
	
    return 0;
}
