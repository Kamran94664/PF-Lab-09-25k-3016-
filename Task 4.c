#include <stdio.h>

int main() {
    int a[10][10], r, c, x, i, j, f=0;
    
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    printf("Enter %d elements:\n", r*c);
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", (*(a+i)+j));
        }
    }
    printf("Enter element to search: ");
    scanf("%d", &x);
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            if(*(*(a+i)+j)==x) {
                printf("Found at row %d column %d", i, j);
                f=1;
                break;
            }
        }
        if(f) break;
    }
    if(!f) printf("-1");
    return 0;
}


