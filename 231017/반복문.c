#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void)
{
	int month, days;

	printf("��: ");
	scanf("%d", &month);

	switch (month)
	{
	case 2:
		days = 28;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:
		days = 31;
		break;
	}
	printf("%d���� �ϼ��� %d��\n", month, days);
	return 0;

	
}



