#include <stdio.h>

int main()
{
    int n=10;

    printf("%d", !n); //0
    printf("%d", !(!n)); //1
    printf("%d", !(n>5)); //0
    printf("%d", !(n<5)); //1

    return 0;
}

