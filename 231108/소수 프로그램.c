#include <stdio.h>

int get_integer(void) {
    int n;

    printf("정수를 입력하시오: ");
    scanf_s("%d", &n);
    return n;
}

int is_prime(int n) {
    int i;

    if (n <= 1)
        return 0; 

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(void) {
    int n;
    n = get_integer();

    printf("1부터 %d까지의 소수:\n", n);

    for (int i = 1; i <= n; i++) {
        if (is_prime(i) == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
