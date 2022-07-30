#include <stdio.h>

int main()
{
    int a = 100;

    printf("%d", !a); //0
    printf("%d", !(a!=100)); //1
    printf("%d", !(a<99)); //1
    printf("%d", !(a>99)); //0

    return 0;
}