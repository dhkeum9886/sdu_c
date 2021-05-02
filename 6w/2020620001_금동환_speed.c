#include <stdio.h>

/*
 * 파일명 : 2020620001_금동환_speed
 * 2021.04.17
 * 작성자 : 금동환
 */

int main() {
	double car_speed = 80;
	double distance = 500;
	double time = distance / car_speed;

	printf("자동차의 속도는 %.0lf km/h \n", car_speed);
	
	printf("자동차가 %.2lf시간 동안 진행한 거리는 %.2lf km 이다.\n", time, distance);
    return 0;
}
