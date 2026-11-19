#include <stdio.h>


int main()
{
    int n, t, sum = 0, d;
    printf("Enter a positive number");
    scanf("%d", &n);
    while ( n > 0)
    {
        printf("%d is a positive.n");

    }
    t = n;
    while(t > 0)
    {
        d = t%10;
        sum = sum + d * d * d;
        t = t/10;
        d++;
    }
    if(sum = n)
    {
        printf("number is armstrong");

    }
    else
    {
        printf("number is not armstrong");

    }

    return 0;
}
