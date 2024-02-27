#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, computer, result;
    srand(time(NULL)); 

    while (1) {
        printf("가위(1), 바위(2), 보(3) 중 하나를 선택 (4를 입력하면 종료): ");
        scanf_s("%d", &user);

        if (user == 4) {
            printf("게임 종료\n");
            break;
        }

        if (user < 1 || user > 3) {
            printf("잘못된 입력입니다. 다시 선택하세요.\n");
            continue; 
        }

       
        computer = rand() % 3 + 1;

        printf("사용자: ");
        switch (user) {
        case 1:
            printf("가위\n");
            break;
        case 2:
            printf("바위\n");
            break;
        case 3:
            printf("보\n");
            break;
        }

        printf("컴퓨터: ");
        switch (computer) {
        case 1:
            printf("가위\n");
            break;
        case 2:
            printf("바위\n");
            break;
        case 3:
            printf("보\n");
            break;
        }

        if (user == computer) {
            printf("비겼습니다!\n");
        }
        else if ((user == 1 && computer == 3) ||
            (user == 2 && computer == 1) ||
            (user == 3 && computer == 2)) {
            printf("사용자가 이겼습니다!\n");
        }
        else {
            printf("컴퓨터가 이겼습니다!\n");
        }
    }

    return 0;
}
