#include <stdio.h>

int main() {
    int answer, a, count = 0; // 정답, 입력값, 누적횟수 변수 선언
    
    scanf("%d", &answer); //정답이 될 숫자를 입력받음

    do {
        count++; // 반복이 시작될 때마다 횟수 1씩 증가
        scanf("%d", &a); // 사용자가 정수 입력

        if (a < answer) { // 입력값이 정답보다 작을 경우
            printf("%d<?\n", a); // 숫자보다 큼을 나타내는 출력
        } else if (a > answer) { // 입력값이 정답보다 클 경우
            printf("%d>?\n", a); // 숫자보다 작음을 나타내는 출력
        } else { // 정답을 맞힌 경우 
            printf("%d==?\n", a); // 정답임을 나타내는 출력
        }
        
    } while (a != answer); // 입력한 값과 정답이 다른 경우 계속 반복

    printf("%d\n", count); // 입력 누적 횟수를 출력
        
    return 0; // 프로그램 정상 종료
}
