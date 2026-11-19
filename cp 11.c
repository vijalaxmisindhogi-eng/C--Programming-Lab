#include <stdio.h>
#include <stdio.h>

int main()
{
    int n, i;
    long long fact = 1;
    int a = 0, b = 1, c;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Factorial
    for(i = 1; i <= n; i++)
        fact = fact * i;

    printf("Factorial = %lld\n", fact);

    // Fibonacci series
    printf("Fibonacci Series: ");
    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
