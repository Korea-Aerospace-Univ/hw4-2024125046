#include <stdio.h>

int main() {
    int N; // 입력될 문자의 개수를 저장하는 변수
    int eng = 0, num = 0; 얼마나 연속된는지 세는 소문자와 숫자 변수
    int maxEng = 0, maxNum = 0; //연속된 소문자와 숫자 중 최대 연속을 저장하는 변수
    char ch; //한 글자씩 입력받는 변수
    scanf("%d", &N); //N을 입력받음
    for (int i = 0; i < N; i++) { // N번만큼 반복하여 한 글자씩 처리
        scanf(" %c", &ch);  // 문자 입력받음
        if (ch >= 'a' && ch <= 'z') { //소문자일 경우
            eng++; //소문자 연속될때 1씩 증가시킴
            num = 0; //숫자 카운트 0으로 초기화
            if (eng > maxEng) //현재 카운트가 클 경우 maxEng 최대 카운트
                maxEng = eng;
        } 
        else if (ch >= '0' && ch <= '9') { //숫자일 경우
            num++; //숫자 연속될 때 1씩 증가시킴
            eng = 0; //소문자 0으로 초기화
            if (num > maxNum) //현재 카운트가 클 경우 maxNum 최대 카운트
                maxNum = num;
        } 
        else {
            eng = 0;// 다른 문자가 오면 두 카운트 0으로 초기화
            num = 0;
        }
    }

    printf("%d\n", maxEng); //소문자 최대 카운트 출력
    printf("%d\n", maxNum); /숫자 최대 카운트 출력

    return 0; //정상 종료
}



