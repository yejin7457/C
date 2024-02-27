#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;

    printf("양의 정수를 입력하세요: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("양의 정수를 입력하세요.\n");
        return 1; 
    }

    printf("%d의 약수는: ", n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

