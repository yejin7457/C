#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    // �� A�� ����
    double a_x = 50;
    double a_y = 50;
    double a_radius = 30;

    // �� B�� ���� �Է�
    double b_x, b_y, b_radius;
    printf("�� B�� �߽� x, y ��ǥ �Է�: ");
    scanf("%lf %lf", &b_x, &b_y);
    printf("�� B�� ������ �Է�: ");
    scanf("%lf", &b_radius);

    // �� ���� �߽� ���� �Ÿ� ���
    double distance = sqrt((b_x - a_x) * (b_x - a_x) + (b_y - a_y) * (b_y - a_y));

    // �� A�� �� B�� ���� �Ǻ�
    if (distance + b_radius < a_radius) {
        printf("�� A�� �� B�� �����մϴ�.\n");
    }
    else if (distance + a_radius < b_radius) {
        printf("�� B�� �� A�� �����մϴ�.\n");
    }
    else if (distance < a_radius + b_radius) {
        printf("�� A�� �� B�� �κ������� ��Ĩ�ϴ�.\n");
    }
    else {
        printf("�� A�� �� B�� ��ġ�� �ʽ��ϴ�.\n");
    }

    return 0;
}