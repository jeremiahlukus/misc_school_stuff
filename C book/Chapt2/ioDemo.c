#include <stdio.h> 
#include <stdlib.h>

int main(void)
{

    printf("My initials are: %c%c%c and my age is %d. \n",'J', 'L', 'P', 24);
    char f,m,l;
    int age;
    char input[20];
    printf("enter your intials followed by you age");
    scanf("%c %c %c %d", &f, &m, &l, &age);
    printf("My initials are: %c%c%c and my age is %d. \n",f,m,l,age);;
    
    scanf("%s", input);
    printf("%s", input);

    return(0);
}
