#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float side1, side2, side3;

    // �� ���� ���̸� �Է¹޽��ϴ�.
    printf("�� ���� ���̸� �Է��ϼ���: ");
    scanf("%f %f %f", &side1, &side2, &side3);


    // �ﰢ���� �� �� �ִ��� Ȯ��
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        // �ﰢ���� �� �� �ִ� ���

        // ���ﰢ�� �˻�
        if (side1 == side2 && side2 == side3) {
            printf("���ﰢ���Դϴ�.\n");
        }
        // �����ﰢ�� �˻�
        else if (side1 * side1 + side2 * side2 == side3 * side3 ||
            side1 * side1 + side3 * side3 == side2 * side2 ||
            side2 * side2 + side3 * side3 == side1 * side1) {
            printf("�����ﰢ���Դϴ�.\n");
        }

        // �̵�ﰢ�� �˻�
        else if (side1 == side2 || side2 == side3 || side3 == side1) {
            printf("�̵�ﰢ���Դϴ�.\n");
        }
        // �� ���� ���
        else {
            printf("�Ϲݻﰢ���Դϴ�.\n");
        }
    }
    else {
        // �ﰢ���� �� �� ���� ���
        printf("�ﰢ���� �� �� ����\n");
    }

    return 0;
}