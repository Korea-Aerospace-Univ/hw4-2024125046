#include <stdio.h>

int main() {
    int answer, a, count = 0;
    if (scanf("%d", &answer) != 1) return 0;
    do {
        count++;
        if (scanf("%d", &a) != 1) break;

        if (a < answer) {
            printf("%d<?\n", a);
        } else if (a > answer) {
            printf("%d>?\n", a);
        } else {
            printf("%d==?\n", a);
        }
        
    } while (a != answer);
    printf("%d\n", count);
        
    return 0;
}
