#include <stdio.h>

int main(void) {
	double bottom, height, area;

	printf("삼각형의 밑변: ");
	scanf_s("%lf", &bottom);
	printf("삼각형의 높이: ");
	scanf_s("%lf", &height);
	area = bottom * height / 2;
	printf("삼각형의 높이: %lf", area);

	return 0;
}