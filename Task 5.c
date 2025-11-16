#include <stdio.h>

void printData(void *p, char t) {
    if(t=='i') printf("%d", *(int*)p);
    else if(t=='f') printf("%.2f", *(float*)p);
    else if(t=='c') printf("%c", *(char*)p);
}

int main() {
    int id;
    float price;
    char cat;

    printf("Enter ID (int): ");
    scanf("%d", &id);

    printf("Enter Price (float): ");
    scanf("%f", &price);
    printf("Enter Category (char): ");
    scanf(" %c", &cat);

    printf("ID: ");
    printData(&id, 'i');
    printf("\nPrice: ");
    printData(&price, 'f');

    printf("\nCategory: ");
    printData(&cat, 'c');
    return 0;
}

