#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;

    printf("���� ������ �Է��ϼ���: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("���� ������ �Է��ϼ���.\n");
        return 1; 
    }

    printf("%d�� �����: ", n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

