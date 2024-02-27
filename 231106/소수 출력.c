#include <stdio.h>

int main() {
    int n;

    printf("양의 정수를 입력하세요: ");
    scanf_s("%d", &n);

    if (n < 1) {
        printf("양의 정수를 입력하세요.\n");
        return 1;
    }

    printf("1에서 %d까지의 소수:\n", n);

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

