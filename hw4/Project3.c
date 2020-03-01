#include <stdio.h>

int main (void)
{
    int m,n, mod, Numerator, Denominator, lowNumerator, lowDenominator;
    printf("ENter a fraction: ");
    scanf ("%d %d" , &m, &n);

    Numerator = m;
    Denominator = n;

    if (Denominator == 0) 
    {
        printf("Cannot divide by zero" );
    }

    while (mod != 0)
    {
        mod = m % n;
        m = n;
        n = mod;
    }

    lowNumerator = Numerator / m;
    lowDenominator = Denominator / m;

    printf("In lowest terms: %d / %d \n", lowNumerator, lowDenominator);

    return 0;
}


