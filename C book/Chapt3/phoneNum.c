#include<stdio.h> 

int main(void) {
    int area, country, phone;

    printf("Enter your phone number: ");
    scanf("(%d)%d-%d", &area, &country, &phone);

    printf("%d,%d.%d.\n", area, country, phone);
    return 0;
}
