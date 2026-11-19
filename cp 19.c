#include <stdio.h>
#include <stdlib.h>

int main()
 {
           int *p, n, i;
           int sum = 0;
           int largest, smallest;
           float avarage;

           printf("Enter number of elements: ");
           scanf("%d", &n);

           p = (int *)malloc(n * sizeof(int));

           printf("Enter elements:\n");

           for(i = 0; i < n; i++)

 {
     scanf("%d", p + i);
 }
 largest = *p;
 smallest = *p;
 for  (i = 0; i < n; i++)
     {
         sum = sum + *(p + i);
         if (*(p + i ) > largest )
            largest = *(p + i);
         if(*(p + i) < smallest)
         smallest = *(p + i);

     }
     if(*(p + i) < smallest)

 avarage = (float)sum / n;
 printf("Sum = %d\n", sum);
 printf("Avarage = %.2f\n",avarage);
 printf("Largest = %d\n", largest);
 printf("Smallest = %d\n", smallest);
 free(p);

    return 0;
}
