Chapter 6 

#6
const in segments[10][7] ={ { 1, 1, 1, 1, 1, 1, 0},
                            { 0, 1, 1, 0, 0, 0, 0},
                            { 1, 1, 0, 1, 1, 0, 1}, 
                            { 1, 1, 1, 1, 0, 0, 1},
                            { 0, 1, 1, 0, 0, 1, 1}, 
                            { 1, 0, 1, 1, 0, 1, 1},
                            { 1, 0, 1, 1, 1, 1, 1},
                            { 1, 1, 1, 0, 0, 0, 0},
                            { 1, 1, 1, 1, 1, 1, 1},
                            { 1, 1, 1, 1, 0, 1, 1} }


#11
char checker_board[8][8];
int i,j; 
for (i = 0;i<8;i++)
{
    for(j=0;j<8;j++)
}
printf("%c", checker_board[i][j] = ((i+j) % 2 ? 'R' : 'B')); 
}






Chapter 9

#3 

#include<stdio.h>

int gcd(int, int);
int main(void) {
    int x, y;
    
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("\nEnter the second number: ");
    scanf("%d", &y);

    printf("The GCD is : %d", gcd(x,y));
    return 0;
} 

int gcd (int x, int y) {
    int remainder;

    while(y != 0) {
        remainder = x % y;
        x = y;
        y = remainder;
    }
    return x;
}




#12

double inner_product(double a[], double b[], int n) {
    double sum = 0;

    for(i = 0; i < n; i++)
        sum += a[i] *b[i];
        return sum;
}






Chapter 11
#4

void swap (int *i, int *j) {
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}




Chapter 12 

#9

double inner_product(const double *a, const double *b, int n) {
    double *pt1, *pt2;
    double sum = 0.0;

    for (pt1 = a, pt2 = b; pt1 < a+n ; pt1++, pt2++)
        dum += (*pt1) * (*pt2);
        return sum; 
}




