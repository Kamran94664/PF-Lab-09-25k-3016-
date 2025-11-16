#include <stdio.h>

int main() {
    int a[11], i, s=0, max=0, idx=0;

    printf("Enter scores of 11 players:\n");
    for(i=0;i<11;i++) {
        printf("Player %d: ", i+1);
        scanf("%d", &a[i]);
        s += a[i];
        if(a[i] > max) {
            max = a[i];
            idx = i;
        }
    }
    printf("Total Score: %d\n", s);
    printf("Average Score: %.2f\n", s/11.0);
    printf("Highest Score: %d by Player %d\n", max, idx);
    return 0;
}

