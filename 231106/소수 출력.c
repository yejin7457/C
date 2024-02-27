#include <stdio.h>

int main() {
    int n;

    printf("���� ������ �Է��ϼ���: ");
    scanf_s("%d", &n);

    if (n < 1) {
        printf("���� ������ �Է��ϼ���.\n");
        return 1;
    }

    printf("1���� %d������ �Ҽ�:\n", n);

    for (int num = 2; num <= n; num++) {
        int Prime = 1;  

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                Prime = 0;  
                break;        
            }
        }

        if (Prime) {
            printf("%d ", num);  
        }
    }

    printf("\n");

    return 0;
}

