#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double rate;
	double usd;
	int krw;

	printf("ȯ���� �Է��Ͻÿ�: ");
	scanf("%lf", &rate);

	printf("��ȭ �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("��ȭ %d���� %lf�޷��Դϴ�.\n", krw, usd);

	return 0;
}