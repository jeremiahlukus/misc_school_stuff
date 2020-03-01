#include<stdio.h>

int main(void) {

    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;

    printf("Enter the numbers from i to 16 in any order: \n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &o, &p);      
    printf("Row sums:  %d, %d, %d, %d ", (a+b+c+d), (e+f+g+h), (i+j+k+l),(m+n+o+p));    
    return 0;
}

