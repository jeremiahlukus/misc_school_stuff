#include<stdio.h>

int main(void){
    int dig_count[10] = { 0 };
    int dig; 
    long n;

    printf("Enter a number: ");
    scanf("%lu", &n);
    
    while(n > 0 ) {
        dig = n % 10;
        dig_count[dig]++;
        n /= 10;

    }
    printf("Digit:       ");
    for( dig = 0; dig <= 9;dig++)
        printf("%3d", dig);
        printf("\nOccurrences: ");

    for ( dig = 0; dig <= 9; dig++)
        printf("%3d", dig_count[dig]);
        printf("\n");

        return 0;
}

