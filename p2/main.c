#include <stdio.h>

int main() {
    int N;
    int eng = 0, num = 0;
    int maxEng = 0, maxNum = 0;
    char ch;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf(" %c", &ch); 
        if (ch >= 'a' && ch <= 'z') {
            eng++;
            num = 0;
            if (eng > maxEng) 
                maxEng = eng;
        } 
        else if (ch >= '0' && ch <= '9') {
            num++;         
            eng = 0;
            if (num > maxNum) 
                maxNum = num;
        } 
        else {
            eng = 0;
            num = 0;
        }
    }

    printf("%d\n", maxEng);
    printf("%d\n", maxNum);

    return 0;
}



