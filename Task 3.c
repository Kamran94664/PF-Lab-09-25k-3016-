#include <stdio.h>

int isv(char c) {
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') return 1;
    return 0;
}

void rep(char a[][20], int r) {
    int i, j;
    for(i=0;i<r;i++) {
        for(j=0;a[i][j]!='\0';j++) {
            if(isv(a[i][j])) a[i][j] = '*';
        }
    }
}

int main() {
    int n, i;
    char a[10][20];
    printf("Enter Number of character: ");
    scanf("%d", &n);
    	printf("Enter only words not scentence:-\n ");
    for(i=0;i<n;i++){
	 scanf("%s", a[i]);
	}
	rep(a, n);
	printf("The replaced Form is:-\n");
    for(i=0;i<n;i++){		
	 printf("%s\n", a[i]);
	}
	return 0;
}

