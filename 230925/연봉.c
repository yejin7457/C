#include <stdio.h>

int main(void) {
	double money, year;

	printf("������ �Է��Ͻÿ�(����:����): ");
	scanf_s("%lf", &money);
	year = 100000 / money;
	printf("10���� �����µ� �ɸ��� �ð�(����:��): %.2lf", year);

	return 0;
}