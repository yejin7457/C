#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float side1, side2, side3;

    // 세 변의 길이를 입력받습니다.
    printf("세 변의 길이를 입력하세요: ");
    scanf("%f %f %f", &side1, &side2, &side3);


    // 삼각형이 될 수 있는지 확인
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        // 삼각형이 될 수 있는 경우

        // 정삼각형 검사
        if (side1 == side2 && side2 == side3) {
            printf("정삼각형입니다.\n");
        }
        // 직각삼각형 검사
        else if (side1 * side1 + side2 * side2 == side3 * side3 ||
            side1 * side1 + side3 * side3 == side2 * side2 ||
            side2 * side2 + side3 * side3 == side1 * side1) {
            printf("직각삼각형입니다.\n");
        }

        // 이등변삼각형 검사
        else if (side1 == side2 || side2 == side3 || side3 == side1) {
            printf("이등변삼각형입니다.\n");
        }
        // 그 외의 경우
        else {
            printf("일반삼각형입니다.\n");
        }
    }
    else {
        // 삼각형이 될 수 없는 경우
        printf("삼각형이 될 수 없음\n");
    }

    return 0;
}