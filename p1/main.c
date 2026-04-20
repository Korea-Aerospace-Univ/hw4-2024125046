#include <stdio.h>

int main() {
    int answer, a, count = 0;
    scanf("%d", &answer);

    do {
        count ++;
        scanf("%d", &a);
    if (a < answer){
            printf("%d<?\n", a);
    } else { 
        printf("%d>?\n", a);
    }
    } while(a!=answer);

    printf("%d", count);
        
    return 0;
}

