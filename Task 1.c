#include <stdio.h>

void input(int (*a)[5]) {
    int i, j;
    printf("what is the Status of the bed: (1) for occupied, (0) for empty:\n ");
    for(i=0;i<3;i++) {
    		printf("ward %d\n",i+1);
        for(j=0;j<5;j++) {
        		printf("Bed %d:- ",j+1);
            scanf("%d", (*(a+i)+j));
        }
        printf("\n");
    }
}

void count(int (*a)[5], int *occ, int *empty) {
    int i, j;
    *occ = 0;
    *empty = 0;
    for(i=0;i<3;i++) {
        for(j=0;j<5;j++) {
            if(*(*(a+i)+j)==1) (*occ)++;
            else (*empty)++;
        }
    }
}

int main() {
    int beds[3][5];
    int occ, empty, i, j;
    input(beds);
    count(beds, &occ, &empty);
	    for(i=0;i<3;i++) {
	    	printf("ward%d| ",i+1);
    	    for(j=0;j<5;j++) printf("%d ", beds[i][j]);
        	printf("|\n");
    }
    printf("Beds are occupied:%d\nBeds that are empty are %d", occ, empty);
    return 0;
}

