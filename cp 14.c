#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000], n, key, i, count = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter elements:\n ");
    for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

             printf("Enter element to search:");
             scanf("%d",&key);

             for (i = 0; i < n; i++)
             {
                 if (a[i] == key)
                 {
                   printf("Position = %d\n", i + 1);
                   count++;

                 }

             }
             if (count == 0)
                printf("Element not fond\n");
             else
                printf("Frequency = %d\n", count);
             return 0;

}
