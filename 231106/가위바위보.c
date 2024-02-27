#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, computer, result;
    srand(time(NULL)); 

    while (1) {
        printf("����(1), ����(2), ��(3) �� �ϳ��� ���� (4�� �Է��ϸ� ����): ");
        scanf_s("%d", &user);

        if (user == 4) {
            printf("���� ����\n");
            break;
        }

        if (user < 1 || user > 3) {
            printf("�߸��� �Է��Դϴ�. �ٽ� �����ϼ���.\n");
            continue; 
        }

       
        computer = rand() % 3 + 1;

        printf("�����: ");
        switch (user) {
        case 1:
            printf("����\n");
            break;
        case 2:
            printf("����\n");
            break;
        case 3:
            printf("��\n");
            break;
        }

        printf("��ǻ��: ");
        switch (computer) {
        case 1:
            printf("����\n");
            break;
        case 2:
            printf("����\n");
            break;
        case 3:
            printf("��\n");
            break;
        }

        if (user == computer) {
            printf("�����ϴ�!\n");
        }
        else if ((user == 1 && computer == 3) ||
            (user == 2 && computer == 1) ||
            (user == 3 && computer == 2)) {
            printf("����ڰ� �̰���ϴ�!\n");
        }
        else {
            printf("��ǻ�Ͱ� �̰���ϴ�!\n");
        }
    }

    return 0;
}
