#include <stdio.h>

int main(void) {
	double mile, meter;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%lf", &mile);
	meter = 1609.0 * mile;
	printf("%lf ������ %lf�����Դϴ�.", mile, meter);

	return 0;
}