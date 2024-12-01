#include <stdio.h>

int fbi(int);

int fbi(int n)
{
    if(n == 1 || n == 2)
    return n-1;
    return (fbi(n - 2) + fbi(n - 1));
}

int main()
{
    int x;
    scanf("%d", &x);
    printf("The value of the fibonacci series at index %d is %d", x, fbi(x));
    return 0;
}