#include <stdio.h>

int main(void) {
	double bottom, height, area;

	printf("�ﰢ���� �غ�: ");
	scanf_s("%lf", &bottom);
	printf("�ﰢ���� ����: ");
	scanf_s("%lf", &height);
	area = bottom * height / 2;
	printf("�ﰢ���� ����: %lf", area);

	return 0;
}