#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target[3];
    int Guess[3];
    int tries = 0;

    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        int num;
        do {
            num = rand() % 9 + 1;
        } while (num == target[0] || num == target[1] || num == target[2]);
        target[i] = num;
    }

    printf(" 게임을 시작합니다!\n");

    while (1) {
        
        printf("세 개의 숫자를 입력하세요 : ");
        scanf_s("%d %d %d", &Guess[0], &Guess[1], &Guess[2]);

        int valid = 1;
        for (int i = 0; i < 3; i++) {
            if (Guess[i] < 1 || Guess[i] > 9) {
                valid = 0;
                break;
            }
        }
        if (!valid) {
            printf("잘못된 입력입니다.\n");
            continue;
        }

        int strikes = 0, balls = 0;
        for (int i = 0; i < 3; i++) {
            if (Guess[i] == target[i]) {
                strikes++;
            }
            else {
                for (int j = 0; j < 3; j++) {
                    if (Guess[i] == target[j]) {
                        balls++;
                        break;
                    }
                }
            }
        }
        if (strikes == 3) {
            printf("축하합니다. 시도한 횟수: %d\n", tries);
            break;
        }
        else {
            printf("%d스트라이크, %d볼\n", strikes, balls);
            tries++;
        }
    }

    return 0;
}
