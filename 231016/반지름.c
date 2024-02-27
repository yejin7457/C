#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    // 원 A의 정보
    double a_x = 50;
    double a_y = 50;
    double a_radius = 30;

    // 원 B의 정보 입력
    double b_x, b_y, b_radius;
    printf("원 B의 중심 x, y 좌표 입력: ");
    scanf("%lf %lf", &b_x, &b_y);
    printf("원 B의 반지름 입력: ");
    scanf("%lf", &b_radius);

    // 두 원의 중심 간의 거리 계산
    double distance = sqrt((b_x - a_x) * (b_x - a_x) + (b_y - a_y) * (b_y - a_y));

    // 원 A와 원 B의 관계 판별
    if (distance + b_radius < a_radius) {
        printf("원 A가 원 B를 포함합니다.\n");
    }
    else if (distance + a_radius < b_radius) {
        printf("원 B가 원 A를 포함합니다.\n");
    }
    else if (distance < a_radius + b_radius) {
        printf("원 A와 원 B가 부분적으로 겹칩니다.\n");
    }
    else {
        printf("원 A와 원 B가 겹치지 않습니다.\n");
    }

    return 0;
}