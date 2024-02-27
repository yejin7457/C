#include <stdio.h>

int main(void) {
	double c, f;

	printf("화씨값을 입력하시오: ");
	scanf_s("%lf", &f);
	c = (5.0 / 9.0) * (f - 32.0);
	printf("섭씨값은 %lf입니다.", c);

	return 0;
}