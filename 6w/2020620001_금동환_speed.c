#include <stdio.h>

/*
 * ���ϸ� : 2020620001_�ݵ�ȯ_speed
 * 2021.04.17
 * �ۼ��� : �ݵ�ȯ
 */

int main() {
	double car_speed = 80;
	double distance = 500;
	double time = distance / car_speed;

	printf("�ڵ����� �ӵ��� %.0lf km/h \n", car_speed);
	
	printf("�ڵ����� %.2lf�ð� ���� ������ �Ÿ��� %.2lf km �̴�.\n", time, distance);
    return 0;
}
