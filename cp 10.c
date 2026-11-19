#include <stdio.h>


int main()
{
     int n, low, high;
     int i, isprime;

     // *part A
     printf("Enter a number to check prime: ");
     scanf("%d", &n);

     isprime =  1;
     if (n <= 1)
     {
         isprime = 0;
     }
        else
        {
            for (i = 2; i <= n / 2; i++)
            {
                if (n % i == 0)
                {
                    isprime = 0;
                    break;

                }
            }
        }
     if (isprime)
        printf("%d is a prime number.\n", n);
     else
        printf("%d is not a prime number.\n",n);

     // part B
     printf("\nEnter lower and upper limits: ");
     scanf("%d %d", &low, &high);

     printf("Prime numbers between %d and %d are:\n", low, high);

     for(n = low; n <= high; n++)
     {
         if (n < 2)
            continue;

         isprime = 1;

         for (i = 2; i <= n / 2; i++)
         {


            if (n % i == 0)
         {
             isprime = 0;
             break;

         }
     }
        if (isprime)
         printf("%d ", n);
     }
       return 0;


     }
