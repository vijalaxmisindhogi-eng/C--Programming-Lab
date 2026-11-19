#include <stdio.h>


int main()
{
   int a, b, choice;

   printf(" Enter two numbers: ");
   scanf("%d %d", &a, &b);
   while (1)
   {
       printf("\n\n1.  Addition");
       printf("\n2. Substraction");
       printf("\n3. Multipliction");
       printf("\n4. Division");
       printf("\n5. Remainder");
       printf("\n6. Exit");

       printf("\n Enter your chioce: ");
       scanf("%d", &choice);
       switch (choice)
        {
        case 1:
            printf("Addition = %d", a + b);
            break;
            case 2:
            printf("Substraction = %d", a - b);
            break;
            case 3:
                printf("Multiplication = %d", a * b);
                break;
            case 4:
                printf("Division = %d", a / b);
                break;
                printf("cannot divide by zero.");

            case 5:
                if (b != 0)

                    printf("Remainder = %d", a % b);
                  else
                        printf("Cannot find remainder with zero.");
                    break;
            case 6:
                                printf("program ended.");


               return 0;
    default:
        printf("invalid chioce.");
                }
        }
        return 0;
}
