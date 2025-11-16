#include <stdio.h>

void update(int *a) {
    int i, x;
    for(i=0;i<5;i++) {
        scanf("%d", &x);
        *(a+i) += x;
    }
}

float avg(int *a) {
    int i, s=0;
    for(i=0;i<5;i++) s+=*(a+i);
    return s/5.0;
}

int main() {
    int bal[5], i;
    printf("what is the balance;\n");
	for(i=0;i<5;i++) {
	printf("Balance %d:- ",i+1);
		scanf("%d", &bal[i]);
		printf("\n");
   	}
		update(bal);
    printf("The Average Balance is : %.2f", avg(bal));
    return 0;
}

