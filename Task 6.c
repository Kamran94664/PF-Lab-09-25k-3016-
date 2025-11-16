#include <stdio.h>

int main() {
    int a[4][5], i, j, p;
    float per;
    printf("Enter attendance for 4 students (1 = present, 0 = absent):\n");
    for(i=0;i<4;i++) {
        printf("Student %d:\n", i+1);
        for(j=0;j<5;j++) {
            printf(" Day %d: ", j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nAttendance Percentage:\n");
    for(i=0;i<4;i++) {
        p = 0;
        for(j=0;j<5;j++) if(a[i][j]==1) p++;
        per = (p*100)/5.0;
        printf("Student %d: %.2f%%\n", i+1, per);
        if(per<75) printf("Warning\n");
    }
    return 0;
}

