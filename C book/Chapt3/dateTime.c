#include<stdio.h>


int main(void) {
    int day, month, year;

    printf("Enter month day year: ");
    scanf("%d/%d/%d ", &month , &day, &year);

    printf("You entered : %d %.2d %.2d \n", year, month, day);

    return 0;
}

